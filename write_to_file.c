#include <stdio.h>
#include <stdlib.h>
int main(){

    FILE* file_h = fopen("file.txt", "a+");
    fprintf(file_h, "blah blah\n");
    fclose(file_h);
}
