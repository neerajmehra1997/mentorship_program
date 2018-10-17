#include<stdio.h>
int stack[100];
int top=-1,max_size;
void push()
{
	 printf("\n do you to insert an item to stack : (y,n) ");
	 char ch;
	 scanf("%s",&ch);
	 while(ch=='y')
	 {
            if(top>max_size)
            	 {
            	 	 printf("\n Overflow \n");
            	 	 return;
            	 }
	        printf("\n enter item to be inserted :");
	        int item;
         	scanf("%d",&item);
	        top++;
	        stack[top]=item;
	        printf("\n do you to insert an item to stack : (y,n) ");
	        scanf("%s",&ch);
	 }
}
void display()
{

     for(int i=top;i>=0;i--)
     {

           printf("%d\n",stack[i]);
     }
}
void pop()
{
	  if(top==-1)
	  	 {
	  	 	  printf("\n underflow \n");
	  	 	  return;
	  	 }

	   printf("\n item popped : %d",stack[top]);
	   top--;
}
int main()
{
       printf("\n enter maximum size of stack :");
       scanf("%d",&max_size);
       int count;
       do
         {
                printf("\n enter choice: ");
                printf("\n enter 1: for push operation");
                printf("\n enter 2: for pop operation ");
                printf("\n enter 3: for display stack : ");
                int choice;
                scanf("  %d",&choice);
                switch(choice)
                  {
        	             case 1:     push();
        	                         break;

        	             case 2:     pop();
        	                         break;

        	             case 3:     display();
        	                         break;

                      	 default:    printf("\n wrong choice : Try again \n");

                  }
                 printf("\n do you want to continue (press 1 ):  ");
                 scanf("%d",&count);
         }while(count==1);

}
