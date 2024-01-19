#include<stdio.h>

int main()
{
  int num,i,prime=1;
  
  printf("enter a number: ");
  scanf("%d",&num);
  
  if(num<=1)
  prime=0;
  
  for(i=2;i*i<=num;i++)
  {
    if(num%i==0)
    {
      prime=0;
      break;
    } 
   }  
  
  if(prime==1)
  
    printf("%d it is prime number\n",num);
  else
    printf("%d it is not prime number\n",num);
  return 0;
 }   
    
