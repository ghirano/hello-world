#include<stdio.h>

int main(int argc,char **argv)
{
  double pi = 3.1415;
  double a = pi*2;
  printf("�����_�ȉ�1�����o��\n");
  printf("�~���F%0.1fr\n",a);
  printf("�ʐρF%0.1fr^2\n\n",pi);
  printf("�����_�ȉ�2�����o��\n");
  printf("�~���F%0.2fr\n",a);
  printf("�ʐρF%0.2fr^2\n\n",pi);
  printf("�����_�ȉ�3�����o��\n");
  printf("�~���F%0.3fr\n",a);
  printf("�ʐρF%0.3fr^2\n",pi);
  return(0);
}
