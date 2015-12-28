#include <stdio.h>
#include <time.h>

int main(){
	FILE * file;
	char time_str[128];
	time_t current_time = time(NULL);
	struct tm formatted_time  = *localtime(&current_time);
	sprintf(time_str, "/tmp/eu_cell_cb_%d-%d-%d_%d:%d:%d.txt",
			formatted_time.tm_year+1900,
			formatted_time.tm_mon + 1,
			formatted_time.tm_mday,
			formatted_time.tm_hour,
			formatted_time.tm_min,
			formatted_time.tm_sec);




	file = fopen(time_str,"w+");
	fprintf(file,"blah blah 1\n");
	fprintf(file,"foo bar2\n");
	fclose(file);
	return 0;
}
