#include<stdio.h>
#include<math.h>
int main()
{
     int n;
	 printf("\n enter array size-->");
	 scanf("%d",&n);
	 int arr[n];
	 for(int i=0;i<n;i++)
	 {
	 	  scanf("%d",&arr[i]);

	 }
     int brr[10000];
     for(int i=0;i<=1000;i++)
     	 {
     	 	  brr[i]=0;
     	 }

     int small=arr[0];
     for(int i=0;i<n;i++)
	    {
	 	   if(arr[i]<small)
             small=arr[i];

	    }
     for(int i=0;i<n;i++)
     	 {
     	      arr[i]+=abs(small);
     	 	  brr[arr[i]]++;
     	 }
     int sum,count=0;
     printf("\n enter the sum you want-->");
     scanf("%d",&sum);
     sum+=2*abs(small);

     for(int i=0;i<n;i++)
         {
            count+=brr[sum-arr[i]];

            if(sum-arr[i]==arr[i])
            	  count--;
         }

         count/=2;

         printf("\n No. of pairs whose sum is euqal to %d are --> %d",sum,count);


}
