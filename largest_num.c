#include<stdio.h>

int main()

{
   int arr[5];
   int i,large;
   
   printf("enter a element of array : ");
   
   for(i=0;i<5;i++)
   {
     scanf("%d",&arr[i]);
   }  
    
    large=arr[0];
     
   for(i=0;i<5;i++)
   {
    printf("element of array : %d\n",arr[i]);
   
   if(large < arr[i])
   large=arr[i];
   }
   
   printf("large element is %d\n", large);
   
   return 0;
   
  } 
    
