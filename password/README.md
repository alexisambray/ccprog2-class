# Password [contributed by F.R. Salvador]
## This program is the solution to the Password problem tasks.

+ Write a C program that will automatically generate a default password given the user's Firstname and Lastname as inputs.
  + Step #1: Initialize the password as a concatenation of Firstname, underscore and Lastname.
  + Step #2: If the length of the password is less than 8, add new characters at the end of the string such that the length will become 8.
  + Step #3: Capitalize the first character of the first name and the last name
  + Step #4: Replace lower case vowels as follows: ```a``` with ```@```, ```e``` with ```3```, ```i``` with ``` 1```, ```o``` with ```0```, and ```u``` with ```^```
             + upper case vowels should not be replaced.
  + Step #5: Replace lower case consonants as follows: ```s``` with ```*```, and ```t``` with ```?```.
             + upper case consonants should not be replaced.
