/* Example program on structures demonstrating the following:
    a. nested struct data type declaration
    b. initialize the contents of the structure variable
    c. print the values of the members of temp using the structure member
       operator
*/
#include <stdio.h>  // < > pre-defined o system-defined header file
#include <string.h>
#include "grades.h"  // " " this is how you include user-defined header file

int main() {
  struct studentTag temp;

  // Q1: What is the output of the value temp variables?
  // A1: garbage

  // initialize the contents of the structure variable
  strcpy(temp.name.last, "OKAMURA");
  strcpy(temp.name.first, "MASAHIRO");
  temp.practice_score = 0;
  temp.midterm_score = 25;

  // print the values of the members of temp using the structure member operator
  // (dot)
  printf("%s\n", temp.name.last);   // last name of the student
  printf("%s\n", temp.name.first);  // first name of the student
  printf("%d\n", temp.practice_score);
  printf("%d\n", temp.midterm_score);

  return 0;
}
