#include<stdio.h>

int main()
{
   int i,reverse=0,n,rem;
   printf("enter number: ");
   scanf("%d",&n);
   
   while(n!=0)   
   {
     reverse=reverse * 10;
     reverse=reverse+n%10; 
     n=n/10;
   }  
   printf("reverse is : %d ",reverse);
   
  return 0;
 } 
    
   

