#include <stdio.h>
#include <string.h>

int main() {
  char keywords[][9] = {
      "auto",     "else",     "long",    "switch",   "break",    "case",
      "enum",     "register", "typedef", "case",     "extern",   "return",
      "union",    "char",     "float",   "short",    "unsigned", "const",
      "for",      "signed",   "void",    "continue", "goto",     "sizeof",
      "volatile", "default",  "if",      "static",   "while",    "do",
      "int",      "struct",   "_Packed", "double"};

  for (int i = 0; i < 34; i++) {
    printf("%s\n", keywords[i]);
  }

  return 0;
}
