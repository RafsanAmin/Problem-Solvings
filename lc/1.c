#include <stdio.h>
void main() {
  int length;
  printf("How many rows?: ");
  scanf("%d", &length);
  for (int i = 1; i <= length; i++) {
    int sb = 2 * i - 1;
    for (int k = length - i; k >= 0; k--) {
      printf(" ");
    }
    for (int j = 1; j <= sb; j++) {
      printf("#");
    }
    printf("\n");
  }
}