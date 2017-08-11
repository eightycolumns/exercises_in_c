#include <stdio.h>

int main(void) {
  for (int i = 0; i < 8; i += 1) {
    for (int j = 0; j < 8; j += 1) {
      if ((i + j) % 2 == 0) {
        printf("*");
      } else {
        printf(" ");
      }
    }

    printf("\n");
  }
}
