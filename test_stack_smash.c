/* Hello World program */

#include<stdio.h>

int arr[5] = {1, 2, 3, 4, 5};
int f_a(){
	 for (int i = 0; i < 100; i++){
    	printf("arr[%d]=%d\n", i, arr[i]);
    }
    return 0;
}

int main()
{
    f_a();
    printf("Memory Analyzer test done\n");
   
    return 0;
}
