/* program to show the working of index mapping in c */

#include<stdio.h>
#include<math.h>
int index[10000][2]={0};
void indexing(int arr[],int n)
{
	   for(int i=0;i<n;i++)
	   	 {
	   	 	  if(arr[i]>=0)
	   	 	  	  {
	   	 	  	  	  index[arr[i]][0]=1;
	   	 	  	  }
	   	 	  	else
	   	 	  	     {
	   	 	  	     	  index[abs(arr[i])][1]=1;
	   	 	  	     }
	   	 }
}
int search(int X)
{

        if(X>=0)
        {
            if(index[X][0]==1)
                  return 1;
            else
                  return 0;
        }
        else if(index[abs(X)][1]==1)
                 return 1;
             else
                 return 0;

}
int main()
{
	    int n;
	    printf("\n enter the value of n-->");
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=0;i<n;i++)
	    	 {
	    	 	 scanf("%d",&arr[i]);
	    	 }

	    indexing(arr,n);

	     int X;
	     printf("\n enter the item to be searched-->");
	     scanf("%d",&X);

	     if(search(X))
	     	 {
	     	 	   printf("\n Yes item present-->");
	     	 }
	      else
	            printf("\n No not present-->");


}
