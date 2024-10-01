#include <stdio.h>

struct STUDENT {
  char check;
  double score;
  int math;
};

int main(void) {
  struct STUDENT form;
  printf("%d", sizeof(struct STUDENT));
  printf("%d", sizeof(form));
  return 0;
}