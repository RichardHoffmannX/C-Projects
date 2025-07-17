// Learn C:
// printf example
// C is a versatile, general-purpose programming language that has stood the test of time, remaining widely used for more than 50 years.
// Renowned for its power and efficiency, C has been the foundation for building operating systems,
#include <stdio.h>

int main()
{
   // Tutorial 2. printf: A simple example of using printf to display formatted output.
   printf ("Characters: %c %c \n", 'a', 65);
   printf ("Decimals: %d %ld\n", 1977, 650000L);
   printf ("Preceding with blanks: %10d \n", 1977);
   printf ("Preceding with zeros: %010d \n", 1977);
   printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf ("Width trick: %*d \n", 5, 10);
   printf ("%s \n", "A string");
   
   printf("Percentages: %d%% \n", 100);
   return 0;
}