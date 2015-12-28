#include <stdio.h>
#include <stdlib.h>
#include <pwd.h>
#include <string.h>
int __magic_find_user(char* user_buf, unsigned int user_name_len);
void __execute_as_user(char* cmd, char* username);

/* return 0 if user is found, with the user name of user_buf */
/* return -1 if no valid user was found						 */
int __magic_find_user(char* user_buf, unsigned int user_name_len){	
	FILE* passwd_fd;
	struct passwd* pass;
	/* open /etc/passwd */
	passwd_fd = fopen("/etc/passwd", "r");
	if (NULL == passwd_fd)
		printf("failed to open passwd file\n");
	while ( (pass = fgetpwent(passwd_fd)) != NULL) {
		if (pass->pw_uid > 999) {/* user! */
		
			/* if the user uses bash (or zsh :) ), it's a real user */
			if (
				(strstr(pass->pw_shell,"bash") ) ||
				(strstr(pass->pw_shell,"zsh") )
			){
				strncpy(user_buf, pass->pw_name, user_name_len);
				return 0;
			}
		}
	}
	return -1;
}

void __execute_as_user(char* cmd, char* username) {
	char run_cmd[1024];
	sprintf(run_cmd,"su %s - -c '%s'", username, cmd);
	system(run_cmd);
}

int main(){
    const unsigned int user_name_len = 256;
    char user_name[256];
    if (0 == __magic_find_user(user_name, user_name_len)) {
        printf("Username is %s\n", user_name);
	printf("running command as user\n");
	__execute_as_user("ls -l > /tmp/1.txt", user_name);
    }else {
       printf("username not found\n");
    }
    
    return 0;
}
