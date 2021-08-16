/*
    Skeleton file for PASSWORD problem.

  lASTNAME, FIRSTNAME: AMBRAY, ALEXIS
  SECTION: S13
  DATE: AUG 12, 2021

    Violation of any of the RESTRICTIONS will result to point deduction.
*/

/* Do NOT include other header files.

   Do NOT use library functions that we did not discuss/cover in class.
*/
#include <stdio.h>
#include <string.h>

/* Use these string typedefs. */
typedef char String30[31];
typedef char String60[61];

/*
    TO DO:

    Implement the functions as specified in the PASSWORD.PDF file.

        RESTRICTIONS:
        1. Make sure that you follow the function prototypes specified in
   population.h
        2. Do NOT call printf() or scanf() in any of the required function
   definition EXCEPT in the main() function.
        3. Use only the library function that we discussed in class.
   Non-compliance with this restriction will make your answer incorrect, and
   therefore will result into a score of 0.
*/

/*
   Step 1: Define the function that will achieve this step right after this
   comment. Do NOT call print(), scanf() and other library functions that we did
   not discuss in class.
*/
void step1(String30 firstName, String30 lastName, String60 password) {
  strcpy(password, strcat(strcat(firstName, "_"), lastName));
}

/*
   Step 2: Define the function that will achieve this step right after this
   comment. Do NOT call print(), scanf() and other library functions that we did
   not discuss in class.
*/
void step2(String60 password) {
  if (strlen(password) >= 8)
    return;

  for (int i = strlen(password),
           letter = (password[i - 1] + 1 - 'a') % 26 + 'a';
       i < 8; i++, letter = (letter + 1 - 'a') % 26 + 'a') {
    password[i] = letter;
  }
  password[8] = '\0';  // add null terminator
}
/*
   Step 3: Define the function that will achieve this step right after this
   comment. Do NOT call print(), scanf() and other library functions that we did
   not discuss in class.
*/
void step3(String60 password) {
  password[0] -= ' ';

  for (int i = 1; i < strlen(password) - 1; i++) {  // searching the underscore
    if (password[i] == '_') {
      password[i + 1] -= ' ';
      break;
    }
  }
}
/*
   Step 4: Define the function that will achieve this step right after this
   comment. Do NOT call print(), scanf() and other library functions that we did
   not discuss in class.
*/
void step4(String60 password) {
  for (int i = 0; i < strlen(password); i++) {
    switch (password[i]) {
      case 'a':
        password[i] = '@';
        break;
      case 'e':
        password[i] = '3';
        break;
      case 'i':
        password[i] = '1';
        break;
      case 'o':
        password[i] = '0';
        break;
      case 'u':
        password[i] = '^';
        break;
    }
  }
}
/*
   Step 5: Define the function that will achieve this step right after this
   comment. Do NOT call print(), scanf() and other library functions that we did
   not discuss in class.
*/
void step5(String60 password) {
  for (int i = 0; i < strlen(password); i++) {
    switch (password[i]) {
      case 's':
        password[i] = '*';
        break;
      case 't':
        password[i] = '?';
        break;
    }
  }
}

int main() {
  String30 firstName, lastName;
  String60 password;

  // Do NOT add any printf() for prompts before the scanf() function calls.
  scanf("%s", firstName);
  scanf("%s", lastName);

  // Call Step 1 function after this comment and before the printf() statement.
  step1(firstName, lastName, password);
  printf("%s\n", password);  // prints the password value after step 1.
  // Call Step 2 function after this comment and before the printf() statement.
  step2(password);
  printf("%s\n", password);  // prints the password value after step 2.

  // Call Step 3 function after this comment and before the printf()statement.
  step3(password);
  printf("%s\n", password);  // prints the password value after step 3.

  // Call Step 4 function after this comment and before the printf( statement.
  step4(password);
  printf("%s\n", password);  // prints the password value after step 4.

  // Call Step 5 function after this comment and before the printf() statement.
  step5(password);
  printf("%s\n", password);  // prints the FINAL password value after step 5.

  return 0;
}
