#include <stdio.h>
#include<string.h>

void main() {
  char* p = "Banana";
  char a[20] = "Apple";

  strcpy(a, "Rose");
  p = "Tulip";

  printf("%s",p);
  printf("%s", a);
}
