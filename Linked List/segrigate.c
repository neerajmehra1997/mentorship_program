/* Program to create a linked list  suing structure in c */



#include<stdio.h>
#include<stdlib.h>
struct  node
{
         int info;
         struct node *link;
};

struct node *create_list(struct node *head)
{
	    struct node *new_node;
	    struct node *temp;
	    int num;
	    new_node=(struct node*)malloc(sizeof(struct node));
	    printf("\n Enter the data-->");
	    scanf("%d",&num);

	    new_node->info=num;
	    new_node->link=NULL;
        temp=(struct node*)malloc(sizeof(struct node));
	    head=new_node;
	    temp=new_node;

	    char ch;
	    printf("\n Do you want to add more nodes to list-->(y,n)-->");
	           scanf("%s",&ch);
	    while(ch=='y')
	      {

	    	   printf("\n Enter the data-->");
	           scanf("%d",&num);
	           new_node=(struct node*)malloc(sizeof(struct node));
               new_node->info=num;
               new_node->link=NULL;
               temp->link=new_node;
               temp=new_node;

               printf("\n Do you want to add more nodes to list-->(y,n)-->");
	           scanf("%s",&ch);

          }
       //   free(new_node);

          return(head);


}

struct node *segrigate(struct node *head)
{
	  struct node *last,*p,*q;
	  p=head;
	  int count=1 ,x=1;

	  while(p->link!=NULL)
	  	 {
	  	 	  p=p->link;
	  	 	  count++;
	  	 }
	  	 last=p;
	  	 struct node *n;
	  	 n=(struct node *)malloc(sizeof(struct node));
	  	 n->info=-1;
	  	 n->link=head;
	  	 head=n;
	  	 p=n->link;
	  	 q=head;

	  	 while(x<=count)
	  	 	 {
	  	 	 	if((p->info)%2!=0)
	  	 	 		 {
	  	 	 		 	  last->link=p;
	  	 	 		 	  last=p;

	  	 	 		 	  q->link=p->link;

	  	 	 		 	  p=p->link;
	  	 	 		 	  last->link=NULL;
                          x++;
	  	 	 		 }
	  	 	 		else
	  	 	 		    {
	  	 	 		    	q=p;
	  	 	 		    	p=p->link;
	  	 	 		    	x++;
	  	 	 		    }


	  	 	 }


          head=n->link;
	  	  return(head);




}

void display(struct node *head)
{
	  struct node *p;
	  if(head==NULL)
	  	  {
	  	  	  printf("\n List is Empty");
	  	  }
	  p=head;

	  while(p!=NULL)
	    {
	    	   printf(" %d ->",p->info);

	    	   p=p->link;
	    }
	    printf("NULL\n");
}

int main()
{
     struct node *head;
     head=NULL;

     head=create_list(head);             // function call to create list
     display(head);                     // function call to display list

   //  printf("\ntime occurence");
     head=segrigate(head);
     display(head);


}
