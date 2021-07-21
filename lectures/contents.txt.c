/*
  example program on how to read the contents
  of a text file containing SHD (Stock Historical Data).
*/
#include <stdio.h>

int main() {
  char name[6];                   //  company name
  int num_rows_data;              // number of rows of data
  char date[11];                  // MM/DD/YYYY
  double open, high, low, close;  // OHLC
  double volume;
  int i;

  scanf("%s", name);  // NOTE: no & because name is a 1D array name
  printf("%s\n", name);

  scanf("%d", &num_rows_data);
  printf("%d\n", num_rows_data);

  for (i = 0; i < num_rows_data; i++) {
    scanf("%s", date);
    printf("%s\n", date);

    scanf("%lf %lf %lf %lf", &open, &high, &low, &close);
    printf("%.2lf %.2lf %.2lf %.2lf", open, high, low, close);

    scanf("%lf", &volume);
    printf("%.2lf", volume);
  }
  return 0;
}
