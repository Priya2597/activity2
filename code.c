#include<stdio.h>

int main()
{
 int a[0],n,j,i,temp;
 printf("Enter the size of an array");
 scanf("%d",&n);
 printf("Enter the array elements:");
 for (i=0;i<n;i++)
   scanf("%d",&a[i]);
   
   for(i=1;i<n;i++)
      for(j=0;j<(n-1);j++)
        if(a[j]>a[j+1])
         {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
         }
         printf("\array after sorting:");
         for(i=0;i<n;i++)
         printf("%u",a[i]);
         
        return 0;
        
        }
