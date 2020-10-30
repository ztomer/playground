#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char test_buffer[1024];
  char test_buffer2[1024] = "hello";
  int len = strlen(test_buffer2);
  strcpy(test_buffer, test_buffer2);
  printf("b2:%s, strlen:%d\n", test_buffer, len);
  return 0;
}
