#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    printf("Range of signed char is [%d,%d].\n", SCHAR_MIN, SCHAR_MAX);
    printf("Range of unsigned char is [%d, %u].\n", 0, UCHAR_MAX);
   printf("Range of char is [%d, %d].\n", CHAR_MIN, CHAR_MAX);

  printf("Range of signed short int is [%d, %d].\n", SHRT_MIN, SHRT_MAX);
  printf("Range of unsigned short int is [%d, %d].\n", 0, USHRT_MAX);

    printf("Range of signed int is [%d, %d].\n", INT_MIN, INT_MAX);
   printf("Range of unsigned int is [%d, %u].\n", 0, UINT_MAX);

   printf("Range of signed long int is [%ld, %ld].\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long int is [%d, %lu].\n", 0, ULONG_MAX);

     printf("Range of signed float is [%f, %f].\n", FLT_MIN, FLT_MAX);

    return 0;
}
