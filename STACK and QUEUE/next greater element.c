/* program to find next greater element of a number in an array */

                 // SImple method using two loop   Time complexity O(n^2)


#include<stdio.h>
void next_greater_element(int arr[],int n)
{
	   int next=-1;
	   for(int i=0;i<n;i++)
	   	  {
	   	  	   next=-1;
             for(int j=i+1;j<10;j++)
             	  {
             	  	    if(arr[i]<arr[j])
             	  	    	 {
             	  	    	 	  next=arr[j];
             	  	    	 	  break;
             	  	    	 }
             	  }
             	printf("%d --> %d\n",arr[i],next);

	   	  }
}
int main(void)
{

	    int arr[]={2,5,1,10,4,0,12,22,90,34};
	    next_greater_element(arr,10);

}
