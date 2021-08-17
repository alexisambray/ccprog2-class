/*
        Example program on structures demonstrating the following
        a. nested struct data type declaration
        b. initialize the struct members via direct assignment operation = and
   strcpy() for strings c. use scanf() to input/initialize the contents of
   structure members d. how to pass the value of a structure as parameter to a
   function e. how to pass the value of a structure pointer (memory address) to
   a function.
*/
#include <stdio.h>  // < > pre-defined or system-defined header file
#include <string.h>

#include "grades.h"  // " " this is how you include the user-defined header file

void PrintStructure(struct studentTag param) {
  // print the values of the members of param using the structure member
  // operator (dot)
  printf("%s %s %d %d\n", param.name.last, param.name.first,
         param.practice_score, param.midterm_score);
}

void DisplayStructure(struct studentTag* ptr) {
  printf("ptr has a value of %p\n", ptr);

  // How do we now access the contents of structure INDIRECTLY via the pointer
  // ptr
}

int main() {
  struct studentTag temp;  // structure variable
  struct studentTag* ptr;

  ptr = &temp;

  // Q1: What is the initial value of the members of the temp variables?
  // A1: garbage

  /*
          // use scanf() to input/initialize the contents of the structure
     variable scanf("%s", temp.name.last); // input last name scanf("%s",
     temp.name.first); // input first name scanf("%d", &temp.practice_score); //
     input practice score scanf("%d", &temp.midterm_score); // input midterm
     score
  */
  PrintStructure(temp);  // pass the value of the structure, it passes 112 bytes

  DisplayStructure(
      &temp);  // pass the value of the structure variable's memory address
               // memory address == pointer
               // we will pass ONLY sizeof(struct studentTag *)

  printf("size of pointer data is %d bytes.\n",
         (int)sizeof(struct studentTag*));
  printf("&temp is %p\n", &temp);

  printf("temp.practice_score = %d\n", temp.practice_score);    // DIRECT
  printf("temp.practice_score = %d\n", (*ptr).practice_score);  // INDIRECT
  /*
     Assume we have struct studentTag *ptr;

     ptr = &temp;

     I want to access the practice_score member in two ways DIRECTLY and
     INDIRECTLY How will you do that?

     1. DIRECT ACCESS

        temp.practice_score

     2. INDIRECT ACCESS???

        Note: temp == *ptr

              temp.practice_score == *ptr.practice_score
              This is wrong because:
                  error: request for member 'practice_score' in something not a
     structure or union

           What's the correct way?

                  temp.practice_score == (*ptr).practice_score
  */

  /*
          NOTE: temp != &temp  they have different data types

          Q: What is the data type of temp?
          A: struct studentTag

          Q: What is the data type of &temp?
          A: struct studentTag *

  */
  // Q: How many bytes will be allocated for a variable whose of type struct
  // studentTag?
  //    How many bytes was allocated to variable temp?
  // A: 51 + 51 + 4 + 4 = 110 bytes
  // Actual answer is 112 bytes!!!!
  // Reason for this is: byte alignment in structures (or padding -- means
  // adding extra bytes)

  printf("%d\n", (int)sizeof(struct studentTag));  // 112 bytes

  return 0;
}
