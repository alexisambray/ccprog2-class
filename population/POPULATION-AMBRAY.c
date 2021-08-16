/*
    Skeleton file for POPULATION problem.

    lASTNAME, FIRSTNAME: AMBRAY, ALEXIS
    SECTION: S13
    DATE: AUGUST 10, 2021
*/

/* Make sure that you read and understand the contents of the population.h
 * header file. */
#include "population.h"

/*
    TO DO:

    Implement the 5 functions that will compute and return a number that
   correspond as answer for each question from Q1 to Q5.

        You may define other functions if you want, which can be called by one
   or more of the required functions.

        RESTRICTIONS:
        1. Make sure that you follow the function prototypes specified in
   population.h
        2. Do NOT call printf() or scanf() in any of the required function
   definition.
        3. Use only the library function that we discussed in class.
   Non-compliance with this restriction will make your answer incorrect, and
   therefore will result into a score of 0.
        4. Do NOT define a main() function in this file.  The main() function
   definition is already in the file main.c.

    See for example the function for answering Q1 below...
*/

/*
        Q1: How many males were there in year <param_year>?

        The sample INCOMPLETE function definition below shows the appropriate
   return data type (double), a function name and the four necessary parameters
   to compute the answer to the question.

        An example function call would be: Q1(YEAR, POPULATION, nYears, 2000);

        You must fill in the body of the function. DO NOT forget a return
   statement!
*/
int GetIndexOfYear(int YEAR[], int nYears, int param_year) {
  int index = -1;
  for (int i = 0; i < nYears; i++) {
    if (YEAR[i] == param_year) {
      index = i;
      break;
    }
  }
  return index;
}

double Q1(int YEAR[], int POPULATION[], int nYears, int param_year) {
  /* declare your own local variables and define the body of this function. */
  int index = GetIndexOfYear(YEAR, nYears, param_year);

  if (index == -1) {  // if param_year is not found
    return -1;
  }

  double numMales = POPULATION[index] - (POPULATION[index] * PERCENT_FEMALE);

  return numMales; /* replace -1.0 with the appropriate return value */
}

/*
   Q2: How many senior citizens were there in year ___?
*/
double Q2(int YEAR[], int POPULATION[], int nYears, int param_year) {
  int index = GetIndexOfYear(YEAR, nYears, param_year);

  if (index == -1) {  // if param_year is not found
    return -1;
  }

  double numSeniorCitizens = POPULATION[index] * PERCENT_ADULT * PERCENT_SENIOR;

  return numSeniorCitizens;
}
/*
   Q3: What is the annual population growth rate (in percent) in year
   <param_year>?
*/
double Q3(int YEAR[], int POPULATION[], int nYears, int param_year) {
  int index = GetIndexOfYear(YEAR, nYears, param_year);

  if (index == -1 || index == nYears - 1) {  // if param_year is not found OR if
                                             // param_year is the last year
    return -1;
  }

  double annualPopulationGrowth = ((POPULATION[index + 1] - POPULATION[index]) /
                                   (double)POPULATION[index]) *
                                  100;

  return annualPopulationGrowth;
}
/*
    Q4: What is the lowest annual population growth rate?
*/
double Q4(int YEAR[], int POPULATION[], int nYears) {
  double lowestGrowthRate = Q3(YEAR, POPULATION, nYears, YEAR[0]);

  for (int i = 1; i < nYears - 1; i++) {
    double currentGrowthRate = Q3(YEAR, POPULATION, nYears, YEAR[i]);
    if (currentGrowthRate < lowestGrowthRate) {
      lowestGrowthRate = currentGrowthRate;
    }
  }
  return lowestGrowthRate;
}

/*
    Q5: What is the average annual population growth rate?
*/
double Q5(int YEAR[], int POPULATION[], int nYears) {
  double sumGrowthRates = 0;

  for (int i = 0; i < nYears - 1; i++) {
    double growthRate = Q3(YEAR, POPULATION, nYears, YEAR[i]);
    sumGrowthRates += growthRate;
  }
  double average = sumGrowthRates / (nYears - 1);

  return average;
}
/*

    DO NOT define a main() function in this file!!!

    The main() function for testing your solution is already in another file
   named main.c file.

*/
