#include <stdio.h>
#define MAXLENGTH 1000

int strindex(char s[], char t[]);

int main()
{
  char s[] = "hello there hihello";
  char t[] = "hello";
  int ans = strindex(s, t);
  printf("answer is %d\n", ans);
}

int strindex(char s[], char t[]) {
  int i, j, k, ans;
  ans = -1;
  for (i = 0; s[i] != '\0'; i++) {
    k = i;
    for (j = 0; t[j] == s[k]; j++, k++) {
      ;
    }
    if (t[j] == '\0') {
      ans = i;
    }
  }
  return ans;
}