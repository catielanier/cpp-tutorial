#include <stdio.h>

void DrawBox(void) {
  printf("----------\n|        |\n|        |\n|        |\n|        |\n----------\n");
}

int main(void) {
  DrawBox();
  DrawBox();
  return 1;
}

int takeInAnArg(int argInt) {
  return argInt;
}
