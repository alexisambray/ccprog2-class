/* Example program on structures demonstrating the following:
    a. nested struct data type declaration
    b. initialize the struct members via direct assignment operation = and
       strcpy() for strings
    c. use scanf() to input/initialize the contents of the
       structure variable
    d. how to pass the value of a structure as parameter to a
       function
*/
#include <stdio.h>  // < > pre-defined o system-defined header file
#include <string.h>
#include "grades.h"  // " " this is how you include user-defined header file

void PrintStructure(struct studentTag param) {
  // print the values of the members of temp using the structure member operator
  // (dot)
  printf("%s\n", param.name.last);   // last name of the student
  printf("%s\n", param.name.first);  // first name of the student
  printf("%d\n", param.practice_score);
  printf("%d\n", param.midterm_score);
}

int main() {
  struct studentTag temp;

  // Q1: What is the output of the value temp variables?
  // A1: garbage

  // use scanf() to input/initialize the contents of the structure variable
  scanf("%s", temp.name.last);        // input last name
  scanf("%s", temp.name.first);       // input first name
  scanf("%d", &temp.practice_score);  // input practice score
  scanf("%d", &temp.midterm_score);   // input midterm score

  PrintStructure(temp);

  // Q: How many bytes will be allocated for a variable whose of type struct
  // studentTag? A: 51 + 51 + 4 + 4 = 110 bytes
  // Actual answer is 112 bytes!
  // Reason for this is: byte alignment in structues (or passing -- means adding
  // extra bytes)

  printf("%d\n", (int)sizeof(struct studentTag));  // 112 bytes
  return 0;
}
