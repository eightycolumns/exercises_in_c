#include <stdbool.h>
#include <stdio.h>

bool is_even(int d);

int main(void) {
  for (int i = 0; i < 8; i += 1) {
    for (int j = 0; j < 8; j += 1) {
      printf(is_even(i + j) ? "*" : " ");
    }

    printf("\n");
  }
}

bool is_even(int d) {
  return d % 2 == 0;
}
