/*
        Example program on structures demonstrating the following
        a. nested struct data type declaration
        b. initialize the struct members via direct assignment operation = and
           strcpy() for strings
        c. use scanf() to input/initialize the contents of structure members
        d. how to pass the value of a structure as parameter to a function
        e. how to pass the value of a structure pointer (memory address) to
           a function.
        f. show that temp == *ptr  (where ptr = &temp) -- and how to access
           the structure members indirectly. g. new operator structure pointer
           access operator:  ->  dash followed by greater than symbol
*/
#include <stdio.h>  // < > pre-defined or system-defined header file
#include <string.h>

#include "grades.h"  // " " this is how you include the user-defined header file

void PrintStructure(struct studentTag param) {
  // print the values of the members of param using the structure member
  // operator (dot)
  printf("DIRECT: %s %s %d %d\n", param.name.last, param.name.first,
         param.practice_score, param.midterm_score);
}

void DisplayStructure(struct studentTag* ptr) {
  printf("ptr has a value of %p\n", ptr);

  /*  DIRECT access
          printf("%s %s %d %d\n", temp.name.last, temp.name.first,
                 temp.practice_score, temp.midterm_score);
  */

  // How do we now access the contents of structure INDIRECTLY via the pointer
  // ptr
  printf("INDIRECT: %s %s %d %d\n", (*ptr).name.last, (*ptr).name.first,
         (*ptr).practice_score, (*ptr).midterm_score);
}

void DisplayStructure_version2(struct studentTag* ptr)  // we'll use ->
{
  /*  DIRECT access
          printf("%s %s %d %d\n", temp.name.last, temp.name.first,
                 temp.practice_score, temp.midterm_score);
  */

  // How do we now access the contents of structure INDIRECTLY via the pointer
  // ptr
  /*
          printf("INDIRECT: %s %s %d %d\n", (*ptr).name.last, (*ptr).name.first,
                         (*ptr).practice_score, (*ptr).midterm_score);
  */

  /*
     (*ptr).practice_score is VERY INVOLVED (nakakapagod sya) -- long way

     C creator came up with a short cut via the -> operator

     Syntax:   struct-pointer-var-name -> member-name

           (*ptr).practice_score  ==  ptr -> practice_score
  */

  printf("VERSION 2 INDIRECT: %s %s %d %d\n", ptr->name.last, ptr->name.first,
         ptr->practice_score, ptr->midterm_score);
}

/* INCORRECT!!!! HWAG GAYAHIN!!!!!
void InputStructure(struct studentTag temp)
{
        // use scanf() to input/initialize the contents of the structure
variable scanf("%s", temp.name.last); // input last name scanf("%s",
temp.name.first); // input first name scanf("%d", &temp.practice_score); //
input practice score scanf("%d", &temp.midterm_score); // input midterm score
}
*/

void InputStructure(struct studentTag* ptr) {
  // use scanf() to input/initialize the contents of the structure variable
  scanf("%s", (*ptr).name.last);        // input last name
  scanf("%s", (*ptr).name.first);       // input first name
  scanf("%d", &(*ptr).practice_score);  // input practice score
  scanf("%d", &(*ptr).midterm_score);   // input midterm score
}

void InputStructure_version2(struct studentTag* ptr)  // use ->
{
  // use scanf() to input/initialize the contents of the structure variable
  scanf("%s", ptr->name.last);        // input last name
  scanf("%s", ptr->name.first);       // input first name
  scanf("%d", &ptr->practice_score);  // input practice score
  scanf("%d", &ptr->midterm_score);   // input midterm score
}

int main() {
  struct studentTag temp;  // structure variable

  // Q1: What is the initial value of the members of the temp variables?
  // A1: garbage

  // InputStructure(temp);  // will this work????

  InputStructure_version2(&temp);  // pass the value of the memory address

  PrintStructure(temp);  // pass the value of the structure, it passes 112 bytes

  DisplayStructure(
      &temp);  // pass the value of the structure variable's memory address
               // memory address == pointer
               // we will pass ONLY sizeof(struct studentTag *)

  DisplayStructure_version2(&temp);

  printf("size of pointer data is %d bytes.\n",
         (int)sizeof(struct studentTag*));
  printf("&temp is %p\n", &temp);

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
