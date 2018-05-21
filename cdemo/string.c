#include <stdio.h>




int main()
{
  // str1 is a pointer to a constant - cannot change the contents of str1
  char* str1 = "hello1";
  
  printf("str1 : %s\n", str1);

  
  // str2 is an array which holds a copy of the constant
  char str2[6] = "hello2";
  
  printf("str2 : %s\n", str2);

  
  // str3 is also an array which holds a copy of the constant
  //   intialized to hold the string length
  char str3[] = "this is a test";
  printf("str3 : %s\n", str3);

  str3[3] = 'f';
  printf("str3 : %s\n", str3);
}
