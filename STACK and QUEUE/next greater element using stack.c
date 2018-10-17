/* program to find next greater element using stack with liner time complexity   O(n) */

#include<stdio.h>
int stack[10]={0};
int top=-1;
int freq[1000]={0};
void next_greater_element(int arr[],int n)
{
	  top++;
	  stack[top]=arr[0];

	  for(int i=1;i<n;i++)
	  	 {
	  	 	if(top==-1)
	  	 	  {
                  top++;
                  stack[top]=arr[i];
                  continue;
	  	 	  }

	  	 	 while(top!=-1&&stack[top]<arr[i])
	  	 	    {
	  	 	    	freq[stack[top]]=arr[i];
	  	 	    	top--;
	  	 	    }

             top++;
             stack[top]=arr[i];
          
	  	 }

	  	 while(top!=-1)
	  	    {
               freq[stack[top]]=-1;
               top--;
	  	    }

	  	 for(int i=0;i<n;i++)
	  	 	 {
	  	 	 	  printf("%d --> %d\n",arr[i],freq[arr[i]]);
	  	 	 }

}
int main()
{
	  int arr[]={1,3,2,90,87,12,144,67,8,6};
	  next_greater_element(arr,10);



}