#include <stdio.h>

#define MAXLENGTH 1000
void escape(char s[], char t[])
{
  int i, j;
  j = 0;

  for (i = 0; s[i] != '\0'; i++) {
    printf("s[i] is %c\n", s[i]);
    switch(s[i]) {
      case '\n':
        t[j] = '\\';
        j++;
        t[j] = 'n';
        break;
      case '\t':
        t[j] = '\\';
        j++;
        t[j] = 't';
        break;
      default:
        t[j] = s[i];
    }
    j++;
  }
}

void my_getline(char s[], int lim) {
  int c, i;
  i = 0;
  while ((c = getchar()) != EOF) {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
}

int main()
{
  char s[MAXLENGTH], t[MAXLENGTH * 2];
  my_getline(s, MAXLENGTH);
  escape(s, t);
  printf("s is %s\n", s);
  printf("t is %s\n", t);

  
}

