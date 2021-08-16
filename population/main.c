/*
    Skeleton file for POPULATION problem - for main() function.

    lASTNAME, FIRSTNAME: AMBRAY, ALEXIS
    SECTION: S13
    DATE: AUGUST 10, 2021

    Violation of any of the RESTRICTIONS will result to point deduction.
*/

/* DO NOT CHANGE THE #include below.  You are NOT allowed to include other
 * files. */
#include <stdio.h>

/*
   TO DO:  change the #include below to the file with your own lastname.  For
   example if your lastname is SHAZAM, then it should be changed to #include
   "POPULATION-SHAZAM.c".
*/
#include "POPULATION-AMBRAY.c"

/*
   This function will initialize the contents of the YEAR and POPULATION array.
   Do NOT not modify this function.
*/
void Input_Data(int YEAR[], int POPULATION[], int nYears) {
  int i;

  // HINT: use input redirection so that you do not have to type the values for
  // scanf()
  for (i = 0; i < nYears; i++)
    scanf("%d %d", &YEAR[i], &POPULATION[i]);
}

/*
   This function is for debugging only.  Do NOT not modify this function.
*/
void Print_Data(int YEAR[], int POPULATION[], int nYears) {
  int i;

  for (i = 0; i < nYears; i++)
    printf("%d %d\n", YEAR[i], POPULATION[i]);
}

/*
   Use the main() function below to test your Q1() to Q5() function definitions.
   This file is for your use only.  I will NOT use it nor check it.

   Note that I will be using a totally different main.c file for black box
   testing your solution.
*/
int main() {
  int nYears;                // number of years of data in the array
  int YEAR[MAX_SIZE];        // 1D array of Year values
  int POPULATION[MAX_SIZE];  // 1D array of Population values

  /* You are NOT allowed to add other variables. */

  // HINT: use input redirection so that you do not have to type the values for
  // scanf()
  scanf("%d", &nYears);  // input number of years of data considered
  Input_Data(YEAR, POPULATION, nYears);

  // Print_Data(YEAR, POPULATION, nYears);  // for debugging only, commented out
  // in main()

  /*
      Replace the -1.0 in the printf() below with an appropriate call
          to the function you defined as answer to Q1 to Q5.

          DO NOT replace the -1.0 if you were not able to come up with a
     solution.

          DO NOT change the %lf format -- thus, the expected return value data
     type is double.

          Note that A1 means the answer to Q1.

          The correct answers for questions in the questionnaire are in the file
     ANSWER.TXT.
*/
  printf("A1: %.2lf\n",
         Q1(YEAR, POPULATION, nYears, 2000));  // Q1 answer example call
  printf("A2: %.2lf\n", Q2(YEAR, POPULATION, nYears, 2000));  // Q2 answer
  printf("A3: %lf\n", Q3(YEAR, POPULATION, nYears, 2000));    // Q3 answer
  printf("A4: %lf\n", Q4(YEAR, POPULATION, nYears));          // Q4 answer
  printf("A5: %lf\n", Q5(YEAR, POPULATION, nYears));          // Q5 answer

  return 0;
}
