#include<stdio.h>
void stock_span(int arr[],int n,int span[])          // function defination
{


     for(int i=1;i<n;i++)
       {
            int j=i-1;

            while(j>=0&&arr[i]>=arr[j])           // checking for previous elements
            	 {
            	 	  j--;
            	 	  span[i]++;
            	 }
       }
}
int main(void)
{
	 int n;
	 printf("\n enter size : ");
	 scanf("%d",&n);
	 int arr[n];
	 for(int i=0;i<n;i++)
	 	 {
	 	 	 scanf("%d",&arr[i]);
	 	 }
     printf("\narray:\n");
	 for(int i=0;i<n;i++)
	   {
	   	  printf("%d ",arr[i]);
	   }

     int span[n];
     for(int i=0;i<n;i++)
      	 {
      	 	 span[i]=1;
      	 }
     printf("\nspan :\n");
	 stock_span(arr,n,span);

	 for(int i=0;i<n;i++)
      	 {
      	 	 printf("%d ",span[i]);
      	 }
}
