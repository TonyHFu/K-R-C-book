#include <stdio.h>

int lower(int c) {
  if (c >= 'A' && c <= 'Z') {
    return 'a' + c - 'A';
  }
  return 0;
}

int main()
{
  printf("%c\n", lower('T'));
}