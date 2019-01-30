#include <stdio.h>

unsigned int strsize(const char * str) {
  int n = 0;
  while(*str != '\0') {
    str++;
    n++;
  }
  return n;
}

void reverse_string(char * str) {
  int n = strsize(str);

  char *start = str;
  char *end = str + (n - 1);
  while(start < end) {
    char tmp = *start;
    *start = *end;
    *end = tmp;
    start++;
    end--;
  }
}

int main(void) {
  /* char *s = "Hello!"; これだとエラー出るので注意。*/
  char s[] = "Hello!";
  printf("%s\n", s);
  reverse_string(s);
  printf("%s\n", s);
  return 0;
}
