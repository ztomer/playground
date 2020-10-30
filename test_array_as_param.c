#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test(int a[], int len)
{
  for (int i = 0; i < len; i++)
  {
    a[i] = i;
  }
}

int main()
{
  const int len = 3;
  int a[len];
  for (int i = 0; i < len; i++)
  {
    a[i] = 0;
  }

  test(a, len);
  for (int i = 0; i < len; i++)
  {
    printf("blah:%d\n", a[i]);
  }
  return 0;
}

