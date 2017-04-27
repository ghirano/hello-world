#include<stdio.h>

int main(int argc,char **argv)
{
  double pi = 3.1415;
  double a = pi*2;
  printf("小数点以下1桁を出力\n");
  printf("円周：%0.1fr\n",a);
  printf("面積：%0.1fr^2\n\n",pi);
  printf("小数点以下2桁を出力\n");
  printf("円周：%0.2fr\n",a);
  printf("面積：%0.2fr^2\n\n",pi);
  printf("小数点以下3桁を出力\n");
  printf("円周：%0.3fr\n",a);
  printf("面積：%0.3fr^2\n",pi);
  return(0);
}
