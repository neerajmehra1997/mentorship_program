/* program to create a stack using linked list */

#include<stdio.h>
#include<stdlib.h>
struct stack_node
{
	 int item;
	 struct stack_node *link;
};
struct stack_node *push(struct stack_node *top)
{
	   struct stack_node *head,*new_node;
	   char ch;
	 /*  printf("\n do you want to insert an item : (y,n)");
	   scanf("%s",&ch);  */
	   new_node=(struct stack_node *)malloc(sizeof(struct stack_node));
	   int data;
	   printf("\n enter the item to be inserted: ");
	   scanf("%d",&data);
	   new_node->item=data;
	   head=new_node;
	   top=new_node;
	   new_node->link=NULL;
	   printf("\n do you want to insert an item : (y,n)");
	   scanf("%s",&ch);

	   while(ch=='y')
	   	  {


	   	  	   new_node=(struct stack_node *)malloc(sizeof(struct stack_node));
	   	  	   int data;
	   	  	   printf("\n enter the item to be inserted: ");
	   	  	   scanf("%d",&data);
	   	  	   new_node->item=data;
	   	  	   new_node->link=head;
	   	  	   head=new_node;
	   	  	   top=new_node;
               printf("\n do you want to insert an item : (y,n)");
               scanf("%s",&ch);


	   	  }

	   	  return(top);

}
struct stack_node *pop(struct stack_node *top)
{

	   if(top==NULL)
	    	  {
	    	  	  printf("\n stack empty: UNDERFLOW ");
	    	  	  return;
	    	  }
	    printf("\n item popped : %d",top->item);
	    top=top->link;

	    return(top);
}
void display(struct stack_node *top)
{
	    if(top==NULL)
	    	  {
	    	  	  printf("\n stack empty:");
	    	  	  return;
	    	  }
	    struct stack_node *p;
	    p=top;
	    while(p!=NULL)
	      {
	      	   printf(" %d\n",p->item);
	      	   p=p->link;
	      }
}
int main()
{
	 struct stack_node *top;
	 top=NULL;
	 int count;
     do
      {
      	  printf("\n choices: ");
      	  printf("\n enter 1 for push: ");
      	  printf("\n enter 2 for pop: ");
      	  printf("\n enter 3 for display: ");
      	  int choice;
      	  scanf("%d",&choice);
      	  switch(choice)
      	   {
                case 1:    top=push(top);
                           break;

                case 2:    top=pop(top);
                           break;

                case 3:    display(top);
                           break;

                default:   printf("\n wrong choice : try again ");

      	   }

      	  printf("\n Do you want to continue: (press 1) ");
      	  scanf("%d",&count);
      } while (count==1);
}
