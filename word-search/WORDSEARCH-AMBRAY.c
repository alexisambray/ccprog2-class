/*
    Skeleton file for Word Search problem.

    lASTNAME, FIRSTNAME: AMBRAY, ALEXIS
    SECTION: S13
    DATE: AUG 12, 2021

    Violation of any of the RESTRICTIONS will result to point deduction.
*/

/*
    TO DO #1:

    Implement the SIX functions that will compute and return a number that
   correspond as answer for each question from Q1 to Q6.

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

/* Make sure that you read and understand the contents of the wordsearch.h
 * header file. */
#include "wordsearch.h"

/*
    TO DO:

    Implement the 6 functions that will compute and return a number that
   correspond as answer for each question from Q1 to Q6.

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
        Q1: Is the word <param_str> in the list?

        This is a searching problem.  The function should return 1 to mean "Yes,
   the word being searched is in the list", otherwise, it should return 0 to
   mean "No, it is not in the list".

        The example INCOMPLETE function definition below shows the appropriate
   return data type (int), a function name and the necessary parameters to
   compute the answer to the question.

        The param_str represents a function parameter (in this case the search
   key, i.e., the word to search).  It is given as the third parameter in the
   function definition.

        An example function call would be: result = Search(WordList, NUM_SIZE,
   "program"); where result is an int variable

        You must fill in the body of the function. DO NOT forget a return
   statement!
*/

int Q1(char* WordList[], int nSize, char* param_str)
// note: the 2nd parameter can be rewritten as char search_key[]
{
  /* declare your own local variables and define the body of this function. */

  int low = 0, high = nSize - 1, mid;

  while (low <= high) {
    mid = low + (high - low) / 2;
    int compResult = strcmp(param_str, WordList[mid]);
    if (compResult == 0) {
      return 1;

    } else if (compResult < 0) {
      high = mid - 1;

    } else {
      low = mid + 1;
    }
  }

  return -1; /* if word cannot be found */
}

/*
    Q2:How many <param_length>-letter words that start with the
       letter <param_char> are there in the list?

        An example actual question is:

        How many 10-letter words that start with the letter 'g' are there in the
   list?

        (example word is "gatekeeper")
*/
int Q2(char* WordList[], int nSize, int param_length, char param_char) {
  int count = 0;

  for (int i = 0; i < nSize; i++) {
    if (strlen(WordList[i]) == param_length && WordList[i][0] == param_char) {
      count++;
    }
  }
  return count;
}
/*
    Q3: How many words begins with the letter <param_begin_char>  and ends
       with the letter <param_end_char> ? (for example: fry)

        An example actual question is:

    How many words begin with the letter 'q' and ends with the letter 't'?

        (example word is "quit")

*/
int Q3(char* WordList[],
       int nSize,
       char param_begin_char,
       char param_end_char) {
  int count = 0;

  for (int i = 0; i < nSize; i++) {
    if (WordList[i][0] == param_begin_char &&
        WordList[i][strlen(WordList[i]) - 1] == param_end_char) {
      count++;
    }
  }
  return count;
}
/*
        Q4: How many words are there that do not contain any vowel?

        (example word: "cry")
*/
int Q4(char* WordList[], int nSize) {
  int count = 0;

  for (int i = 0; i < nSize; i++) {
    int isVowel = 0;
    for (int j = 0; j < strlen(WordList[i]); j++) {
      switch (WordList[i][j]) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
          isVowel = 1;
      }
    }
    if (!isVowel) {
      count++;
    }
  }
  return count;
}
/*

    Q5: How many words are there that start with the string
            <param_str>?

    An actual example question is:

                How many words are there that start with the string "unli"?

                (example word is "unlimited")

*/
int Q5(char* WordList[], int nSize, char* param_str) {
  int count = 0;

  for (int i = 0; i < nSize; i++) {
    int isMatch = 1;
    for (int j = 0; j < strlen(param_str); j++) {
      if (WordList[i][j] != param_str[j]) {
        isMatch = 0;  // if at least one letter does not match
        break;
      }
    }
    if (isMatch) {
      count++;  // if all leters match
    }
  }
  return count;
}
/*
        Q6 (BONUS QUESTION): What is the longest word?

        The function should return the memory address where the longest word is
   stored in the WordList. This means that the function return type is char *.

        Note: you should NOT manually search for this word. You have to
   implement the function that will search this word.
*/
char* Q6(char* WordList[], int nSize) {
  char* longestWord;
  strcpy(longestWord, WordList[0]);

  for (int i = 1; i < nSize; i++) {
    if (strlen(WordList[i]) > strlen(longestWord)) {
      strcpy(longestWord, WordList[i]);
    }
  }
  return longestWord;
}
/*

    DO NOT define a main() function in this file!!!

    The main() function for testing your solution is already in another file
   named main.c file.

*/
