#include <stdio.h>

int main()
{
  int c, i, j;
  int nc[26];
  for (i = 0; i < 26; ++i)
    nc[i] = 0;
  
  while ((c = getchar()) != EOF) {
    if (c >= 'a' && c <= 'z')
      ++nc[c - 'a'];
  }
  
  for (i = 0; i < 26; ++i) {
    printf("%c", 'a' + i);
    j = nc[i];
    while (j > 0) {
      printf("-");
      j--;
    }
    printf("\n");
  }

}