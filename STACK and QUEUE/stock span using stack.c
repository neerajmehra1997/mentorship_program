#include<stdio.h>
int stack[100]={0};
int top=-1;
void stock_span(int arr[],int n,int span[])
{
	  top++;
	  stack[top]=0;
      span[0]=1;

      for(int i=1;i<n;i++)
      	 {
      	 	   while(top!=-1&&arr[stack[top]]<=arr[i])
      	 	   	 {
      	 	   	 	 top--;
      	 	   	 }


      	 	   if(top==-1)
               {
                 span[i]=i+1;

               }
               else
               {

                   span[i]=i-stack[top];
               }

               top++;
               stack[top]=i;
      	 }

}
int main(void)
{
	  int n;
	  printf("\n enter size: ");
	  scanf("%d",&n);
	  int arr[n];
	  for(int i=0;i<n;i++)
	  	  {
	  	  	   scanf("%d",&arr[i]);
	  	  }

      int span[n];
      for(int i=0;i<n;i++)
         {
         	 span[i]++;
         }

      stock_span(arr,n,span);

      printf("\n span : \n");

      for(int i=0;i<n;i++)
      	  {
      	  	  printf("%d ",span[i]);
      	  }
}
