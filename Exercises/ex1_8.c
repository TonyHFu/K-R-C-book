#include <stdio.h>

int main()
{
  int c;
  int nb;

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ') {
      ++nb;
    }
  }
  printf("%d blanks\n", nb);
  

}