#include<stdio.h>
int freq[1000]={0};
int stack[20];
int top=-1;
int ans[100];
void next_greater_frequency(int freq[],int arr[],int n)
{
	   {
            top++;
            stack[top]=freq[arr[0]];
       }

       for(int i=1;i<n;i++)
       	 {
       	 	  if(top==-1)
       	 	  	 {
       	 	  	 	 top++;
       	 	  	 	 stack[top]=freq[arr[i]];
       	 	  	 	 continue;
       	 	  	 }

       	 	  while(top!=-1&&stack[top]<freq[arr[i]])
       	 	    {
                      ans[stack[top]]=freq[arr[i]];
                      top--;
       	 	    }

       	 	   top++;
       	 	   stack[top]=freq[arr[i]];

       	 }

       	 while(top!=-1)
       	  {


       	  	         ans[stack[top]]=-1;
       	  	         top--;

       	  }


       	  for(int i=0;i<n;i++)
       	    {
       	    	  printf("%d --> %d\n",freq[arr[i]],ans[freq[arr[i]]]);
       	    }



}
int main()
{
	 int arr[]={1,1,2,3,4,2,1};
	 for(int i=0;i<7;i++)
	 	 {
	 	 	  freq[arr[i]]++;
	 	 }

	 next_greater_frequency(freq,arr,7);
}
