/* Example program on structures demonstrating the following:
    a. nested struct data type declaration
    b.  use scanf() to input/initialize the contents of the structure variable
    c.
*/
#include <stdio.h>  // < > pre-defined o system-defined header file
#include <string.h>
#include "grades.h"  // " " this is how you include user-defined header file

int main() {
  struct studentTag temp;

  // Q1: What is the output of the value temp variables?
  // A1: garbage

  // use scanf() to input/initialize the contents of the structure variable
  scanf("%s", temp.name.last);        // input last name
  scanf("%s", temp.name.first);       // input first name
  scanf("%d", &temp.practice_score);  // input practice score
  scanf("%d", &temp.midterm_score);   // input midterm score

  // print the values of the members of temp using the structure member operator
  // (dot)
  printf("%s\n", temp.name.last);   // last name of the student
  printf("%s\n", temp.name.first);  // first name of the student
  printf("%d\n", temp.practice_score);
  printf("%d\n", temp.midterm_score);

  return 0;
}
