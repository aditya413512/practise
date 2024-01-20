#include<stdio.h>

void rotate(int arr[],int k,int n)
{
  int temp[k],i;

  for(i=0;i<k;i++)
 { 
   temp[i]=arr[i];
 }

 for(i=k;i<n;i++)
 {
   arr[i-k]=arr[i];
 }

for(i=0;i<k;i++)
{
  arr[n-k+i]=temp[i];
}

}	

int main()
{
   int arr[6],i;

   int n = sizeof(arr)/sizeof(arr[0]);
   int k=n-1;
   printf("enter a element:");
   for(i=0;i<n;i++)
 {
   scanf("%d",&arr[i]);
 }

  printf("\noriginal array of element:");
   for(i=0;i<n;i++)
 {
   printf("%d\t",arr[i]);
 }
   rotate(arr,k,n);
   printf("\nrotate array of element: ");
  for(i=0;i<n;i++)                        
 {
   printf("%d\t",arr[i]);
 }

  return 0;
}
    
     
	
