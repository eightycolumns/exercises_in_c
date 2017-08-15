#include <stdio.h>
#include <string.h>

#define BINARY_STRING_MAX_LENGTH 8

int main(void) {
  for (int i = 0; i < 256; i += 1) {
    char binary_string[BINARY_STRING_MAX_LENGTH + 1];

    if (i == 0) {
      strcpy(binary_string, "0");
    } else {
      strcpy(binary_string, "");

      for (int j = i; j > 0; j /= 2) {
        char temp[strlen(binary_string) + 1];
        strcpy(temp, binary_string);

        sprintf(binary_string, "%d", j % 2);
        strcat(binary_string, temp);
      }
    }

    printf("%3d\t%8s\n", i, binary_string);
  }
}
