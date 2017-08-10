#include <stdio.h>

int main(void) {
  for (int i = 1; i < 101; i += 1) {
    if (i % 15 == 0) {
      printf("FizzBuzz\n");
    } else if (i % 3 == 0) {
      printf("Fizz\n");
    } else if (i % 5 == 0) {
      printf("Buzz\n");
    } else {
      printf("%d\n", i);
    }
  }
}
