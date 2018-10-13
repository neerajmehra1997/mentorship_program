#include<stdio.h>
#include<iostream>
#include<algorithm.h>
using namespace std;
int main(void)
{
	 int t;
	 cin>>t;
	 int p=1;
	 while(p<=t)
	 {
	 	  p++;
	 	  int a,b;
	 	  cin>>a>>b;
	 	  int arr[a],brr[b];
	 	  for(int i=0;i<a;i++)
	 	  	 cin>>arr[i];
	 	  for(int i=0;i<b;i++)
	 	  	  cin>>brr[i];

	 	  	sort(arr,arr+sizeof(arr));
	 	  	sort(brr,brr+sizeof(brr));

	 	   int i=0,j=0,temp=0;
	 	  
	 	   while(i<a&&j<b)
	 	     {
	 	     	  if(arr[i]==brr[j])
	 	     	  	 {
	 	     	  	 	 i++;
	 	     	  	 	 j++;
	 	     	  	 }

	 	     	  	if(arr[i]<brr[j]) 
	 	     	     	{
	 	     	     		i++;

	 	     	  	    }
	 	     	  	  if(arr[i]>brr[j]) 
	 	     	  	     {
	 	     	  	     	 cout<<"NO\n";
	 	     	  	     	 temp=1;
	 	     	  	     	 break;
	 	     	  	     } 
	 	     }	

	 	     if(j==b&&temp!=1)
	 	     	  cout<<"YES\n";
	 	      else if(temp!=1)
	 	               cout<<"No\n"; 	

	 }

}