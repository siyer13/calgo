#include<stdio.h>
#include<stdlib.h>

void binary(int number)
{
  int bin[10];
  int i = 0;

  for(i=0; number > 0; i++)
  {
    bin[i] = number % 2;
    number = number / 2;
  }
  
  for(i=i-1; i >=0; i--)
  {
    printf("%d",bin[i]);
  }

}

int main()
{
  printf("Decimal to Binary\n");
  binary(256);
}
