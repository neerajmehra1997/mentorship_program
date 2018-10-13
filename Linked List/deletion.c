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


struct node *deletion(struct node *head)
{

          int item;
          printf("\n enter the item to delete-->");
          scanf("%d",&item);
          struct node *p,*q,*temp;
         // p=head;
          q=(struct node *)malloc(sizeof(struct node));

           q->info=-1;
           q->link=head;

           head=q;
           p=head;
           while(p->link!=NULL)
           	   {
           	       if(p->link->info==item)
           	         {

                          temp=p->link;
                          p->link=temp->link;

                          break;


           	         }
           	         p=p->link;
           	   }

           	   free(temp);


           	   head=q->link;
              free(q);

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
	    printf("NULL");
}

int main()
{
     struct node *head;
     head=NULL;

     head=create_list(head);             // function call to create list
     display(head);                     // function call to display list
     //insertion(head);                  // function call to insert a node

     head=deletion(head);
     display(head);

}
