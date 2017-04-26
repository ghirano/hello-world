#include<stdio.h>

int main(int argc,char**argv)
{
  printf("char型:%zuバイト\n",sizeof(char));
  printf("int型:%zuバイト\n",sizeof(int));
  printf("short型:%zuバイト\n",sizeof(short));
  printf("long型:%zuバイト\n",sizeof(long));
  printf("long long型:%zuバイト\n",sizeof(long long));
  printf("_Bool型:%zuバイト\n",sizeof(_Bool));
  printf("signed char型:%zuバイト\n",sizeof(signed char));
  printf("unsigned char型:%zuバイト\n",sizeof(unsigned char));
  printf("unsigned int型:%zuバイト\n",sizeof(unsigned int));
  printf("unsigned short型:%zuバイト\n",sizeof(unsigned short));
  printf("unsigned long long型:%zuバイト\n",sizeof(unsigned long long));
  printf("intN_t型:%zuバイト\n",sizeof(intN_t));
  printf("uintN_t型:%zuバイト\n",sizeof(uintN_t));
  printf("int_leastN_t型:%zuバイト\n",sizeof(int_leastN_t));
  printf("uintN_leastN_t型:%zuバイト\n",sizeof(uintN_leastN_t));
  printf("int_fastN_t型:%zuバイト\n",sizeof(int_fastN_t));
  printf("uint_fastN_t型:%zuバイト\n",sizeof(nint_fastN_t));
  printf("intmax_t型:%zuバイト\n",sizeof(intmax_t));
  printf("uintmax_t型:%zuバイト\n",sizeof(uintmax_t));
  printf("intptr_t型:%zuバイト\n",sizeof(intptr_t));
  printf("uintptr_t型:%zuバイト\n",sizeof(intptr_t));
  printf("float型:%zuバイト\n",sizeof(float));
  printf("double型:%zuバイト\n",sizeof(double));
  printf("long double型:%zuバイト\n",sizeof(long double));
  return(0);
}
