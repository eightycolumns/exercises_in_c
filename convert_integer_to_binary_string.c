#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define BINARY_STRING_MAX_LENGTH 8

char *integer_to_binary_string(char *binary_string, int d);
bool is_nonnegative(int d);

int main(void) {
  for (int i = 0; i < 256; i += 1) {
    char binary_string[BINARY_STRING_MAX_LENGTH + 1];
    printf("%3d\t%8s\n", i, integer_to_binary_string(binary_string, i));
  }
}

char *integer_to_binary_string(char *binary_string, int d) {
  assert(is_nonnegative(d));

  if (d == 0) {
    strcpy(binary_string, "0");
  } else {
    strcpy(binary_string, "");

    while (d > 0) {
      char temp[strlen(binary_string) + 1];
      strcpy(temp, binary_string);

      sprintf(binary_string, "%d", d % 2);
      strcat(binary_string, temp);

      d /= 2;
    }
  }

  return binary_string;
}

bool is_nonnegative(int d) {
  return d >= 0;
}
