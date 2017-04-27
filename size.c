#include<stdio.h>
#include<stdint.h>

int main(int argc,char **argv)
{
  printf("char型:%dバイト\n",sizeof(char));
  printf("int型:%dバイト\n",sizeof(int));
  printf("short型:%dバイト\n",sizeof(short));
  printf("long型:%dバイト\n",sizeof(long));
  printf("long long型:%dバイト\n",sizeof(long long));
  printf("_Bool型:%dバイト\n",sizeof(_Bool));
  printf("signed char型:%dバイト\n",sizeof(signed char));
  printf("unsigned long型:%dバイト\n",sizeof(unsigned long));
  printf("unsigned char型:%dバイト\n",sizeof(unsigned char));
  printf("unsigned int型:%dバイト\n",sizeof(unsigned int));
  printf("unsigned short型:%dバイト\n",sizeof(unsigned short));
  printf("unsigned long long型:%dバイト\n",sizeof(unsigned long long));
  printf("intmax_t型:%dバイト\n",sizeof(intmax_t));
  printf("uintmax_t型:%dバイト\n",sizeof(uintmax_t));
  printf("intptr_t型:%dバイト\n",sizeof(intptr_t));
  printf("uintptr_t型:%dバイト\n",sizeof(intptr_t));
  printf("float型:%dバイト\n",sizeof(float));
  printf("double型:%dバイト\n",sizeof(double));
  printf("long double型:%dバイト\n",sizeof(long double));
/*
  この環境では"%zu"が使用できず"%d"を使用しました。
  また下記の型はコンパイルできませんでした。
  printf("intN_t型:%dバイト\n",sizeof(intN_t));
  printf("uintN_t型:%dバイト\n",sizeof(uintN_t));
  printf("int_leastN_t型:%dバイト\n",sizeof(int_leastN_t));
  printf("uintN_leastN_t型:%dバイト\n",sizeof(uintN_leastN_t));
  printf("int_fastN_t型:%dバイト\n",sizeof(int_fastN_t));
  printf("uint_fastN_t型:%dバイト\n",sizeof(nint_fastN_t));
*/
  return(0);
}
