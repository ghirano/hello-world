#include<stdio.h>
#include<stdint.h>

int main(int argc,char **argv)
{
  printf("char�^:%d�o�C�g\n",sizeof(char));
  printf("int�^:%d�o�C�g\n",sizeof(int));
  printf("short�^:%d�o�C�g\n",sizeof(short));
  printf("long�^:%d�o�C�g\n",sizeof(long));
  printf("long long�^:%d�o�C�g\n",sizeof(long long));
  printf("_Bool�^:%d�o�C�g\n",sizeof(_Bool));
  printf("signed char�^:%d�o�C�g\n",sizeof(signed char));
  printf("unsigned long�^:%d�o�C�g\n",sizeof(unsigned long));
  printf("unsigned char�^:%d�o�C�g\n",sizeof(unsigned char));
  printf("unsigned int�^:%d�o�C�g\n",sizeof(unsigned int));
  printf("unsigned short�^:%d�o�C�g\n",sizeof(unsigned short));
  printf("unsigned long long�^:%d�o�C�g\n",sizeof(unsigned long long));
  printf("intmax_t�^:%d�o�C�g\n",sizeof(intmax_t));
  printf("uintmax_t�^:%d�o�C�g\n",sizeof(uintmax_t));
  printf("intptr_t�^:%d�o�C�g\n",sizeof(intptr_t));
  printf("uintptr_t�^:%d�o�C�g\n",sizeof(intptr_t));
  printf("float�^:%d�o�C�g\n",sizeof(float));
  printf("double�^:%d�o�C�g\n",sizeof(double));
  printf("long double�^:%d�o�C�g\n",sizeof(long double));
/*
  ���̊��ł�"%zu"���g�p�ł���"%d"���g�p���܂����B
  �܂����L�̌^�̓R���p�C���ł��܂���ł����B
  printf("intN_t�^:%d�o�C�g\n",sizeof(intN_t));
  printf("uintN_t�^:%d�o�C�g\n",sizeof(uintN_t));
  printf("int_leastN_t�^:%d�o�C�g\n",sizeof(int_leastN_t));
  printf("uintN_leastN_t�^:%d�o�C�g\n",sizeof(uintN_leastN_t));
  printf("int_fastN_t�^:%d�o�C�g\n",sizeof(int_fastN_t));
  printf("uint_fastN_t�^:%d�o�C�g\n",sizeof(nint_fastN_t));
*/
  return(0);
}
