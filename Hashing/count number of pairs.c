#include<stdio.h>
#include<math.h>
int main()
{

	   int n;
       printf("\n enter the value of n-->");
	   scanf("%d",&n);
	   int arr[n];
	   scanf("%d",&arr[0]);
	   int min=arr[0];
	   for(int i=1;i<n;i++)
	    {
              scanf("%d",&arr[i]);
              if(min>arr[i])                          // finding minimun value in array
              	  min=arr[i];
	    }

	    for(int i=0;i<n;i++)
	    	 {
	    	 	   arr[i]=arr[i]+abs(min);
	    	 }


	    int brr[1000]={0};
	    for(int k=0;k<n;k++)                          // calculating frequency
	    	 {
	    	 	  brr[arr[k]]++;
             }

        int count=0;
	    for(int i=0;i<=100;i++)
	      {
	      	  if(brr[i]!=0)
	                  count+=brr[i]/2;

	      }



	      printf("\n total number of pairs are --> %d",count);







}
