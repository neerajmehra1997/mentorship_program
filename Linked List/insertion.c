/* insertion in a linked list */


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
struct node *reverse(struct node *head)
{


	  struct node *p,*prev,*next;
	  p=head;
	  prev=NULL;
	  while(p!=NULL);
	    {
	    	 next=p->link;
	    	 p->link=prev;
	    	 prev=p;
	    	 p=next;
	    }




	    return(prev);
}


struct node *insertion_beg(struct node *head)                // function defination to insert a node in the beginning of the list
{
	   int item;
	   printf("\n Enter the item to be inserted-->");
	   scanf("%d",&item);

	   struct node *new_node;

	   new_node=(struct node*)malloc(sizeof(struct node));

	   new_node->info=item;
	   new_node->link=NULL;

	   if(head==NULL)             // in case list is empty
	   	  {
	   	  	   head=new_node;
	   	  	   return ;
	   	  }

        new_node->link=head;
        head=new_node;

        return(head);

}


struct node *insertion_end(struct node *head)
{

	   int item;
	   printf("\n Enter the item to be inserted-->");
	   scanf("%d",&item);

	   struct node *new_node,*p;

	   new_node=(struct node*)malloc(sizeof(struct node));

	   new_node->info=item;
	   new_node->link=NULL;



	   if(head==NULL)             // in case list is empty
	   	  {
	   	  	   head=new_node;
	   	  	   return ;
	   	  }

         p=head;

         while(p->link!=NULL)
         	 {
         	 	 p=p->link;
         	 }

         	 p->link=new_node;

         	 return(head);






}

struct node *insertion_btw(struct node *head)
{
      // item to be inserted after a node
       int item;
	   printf("\n Enter the item to be inserted-->");
	   scanf("%d",&item);

	   struct node *new_node,*p;

	   new_node=(struct node*)malloc(sizeof(struct node));

	   new_node->info=item;
	   new_node->link=NULL;



	   if(head==NULL)             // in case list is empty
	   	  {
	   	  	   head=new_node;
	   	  	   return ;
	   	  }

	   	  p=head;


	   	  int n;
	   	  printf("\n enter the number after which you want to insert node-->");
	   	  scanf("%d",&n);


	   	  while(p!=NULL)
	   	  	 {
	   	  	 	 if(p->info==n)
                     break;
                 p=p->link;
	   	  	 }

	   	  	new_node->link=p->link;
	   	  	p->link=new_node;


       // item to be inserted before a node

        p=head;
	   printf("\n Enter the item to be inserted-->");
	   scanf("%d",&item);
	   new_node=(struct node*)malloc(sizeof(struct node));

	      new_node->info=item;
          new_node->link=NULL;

	 	  printf("\n enter the number before  which you want to insert node-->");
	   	  scanf("%d",&n);

	   	  while(p->link!=NULL)
             {
                   if(p->link->info==n)
                     break;
	   	  	     	 p=p->link;
	   	  	 }

	   	  	new_node->link=p->link;
	   	  	p->link=new_node;


    return(head);
}


void display(struct node *head)             // function defination to print the elements of the list
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
     head=insertion_beg(head);                  // function call to insert a node  at the beigning

     printf("\n list after adding a node at the begning -->\n");
     display(head);

     head=insertion_end(head);                   // function call to insert a node at the end of the list
     printf("\n list after adding a node at the end of list-->\n");
     display(head);
     head=insertion_btw(head);                          // function call to insert a node in b/w the list
     printf("\n list after adding a node in between the list -->\n");
     display(head);

     head=reverse(head);
}
