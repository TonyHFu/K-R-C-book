#include <stdio.h>
int htoi(char s[]);
int power(int base, int e);

int htoi(char s[]) {

  int i, n, ans, temp;
  ans = 0;
  for (n = 0; s[n] != '\0'; n++) {
    ;
  }

  for (i = 0; i < n; i++) {

    if (s[i] >= '0' && s[i] <= '9') {
      temp = s[i] - '0';
    } else if (s[i] >= 'a' && s[i] <= 'z') {
      temp = s[i] - 'a' + 11;
    } else if (s[i] >= 'A' && s[i] <= 'Z') {
      temp = s[i] - 'A' + 11;
    }

    ans = ans + temp * power(16, n - i - 1);
  }
  return ans;
}

int power(int base, int e) {
  int ans = 1;
  while (e > 0) {
    ans = ans * base;
    e--;
  }
  return ans;
}

int main() {
  int p = power(16, 3);
  printf("16 ** 3 is %d\n", p);
  int ans = htoi("a234");
  printf("answer to htoi(a234) is %d\n", ans);

}