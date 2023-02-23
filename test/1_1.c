//check if the entered c is a valid identifier
#include <stdio.h>

int main() {
  char c;
  int i = 0;
  printf("Enter a c: ");
  while ((c = getchar()) != '\n') {
    if (i == 0) {
      if (c != '_' && (c < 'a' || c > 'z') && (c < 'A' || c > 'Z')) {
        printf("The given input is not a valid identifier.\n");
        return 0;
      }
    } else {
      if (c != '_' && (c < '0' || c > '9') && (c < 'a' || c > 'z') && (c < 'A' || c > 'Z')) {
        printf("The given input is not a valid identifier.\n");
        return 0;
      }
    }
    i++;
  }

  printf("The given input is a valid identifier.\n");
  return 0;
}
