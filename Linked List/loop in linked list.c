#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node
{
    int info;
    struct node *link;
};
struct node *create(struct node *head)
{
    struct node *new_node,*temp;
    new_node=(struct node*)malloc(sizeof(struct node));

    int item;
    printf("\n enter item-->");
    scanf("%d",&item);
    new_node->info=item;
    new_node->link=NULL;
    count++;
    temp=new_node;
    head=new_node;
    char ch;
    printf("\n Do you want to add more nodes--> (y,n)-->");
    scanf("%s",&ch);
    while(ch=='y')
    {
           count++;
           new_node=(struct node*)malloc(sizeof(struct node));
    	     printf("\n enter item-->");
           scanf("%d",&item);
           new_node->info=item;
           new_node->link=NULL;
           temp->link=new_node;
           temp=new_node;
           printf("\n Do you want to add more nodes--> (y,n)-->");
           scanf("%s",&ch);

    }

      new_node->link=head->link->link;

    return(head);

}
int loop_length(struct node *p1)
{
      struct node *temp;
      temp=p1;
      int res=1;
      while(temp->link!=NULL)
      {

            res++;
            temp=temp->link;
      }

      return(res);
}
int loop(struct node *head)
{
     struct node *p1,*p2;
     p1=p2=head;

     while(p1&&p2&&p2->link)
       {
            p1=p1->link;
            p2=p2->link->link;
            if(p1==p2)
               {
                     int x=loop_length(p1);
                     printf("\n loop length is --> %d",x);
                     return 1;
               }
       }
       return 0;
}
void display(struct node *head)
{
	     struct node *p;
	     p=head;

         int flag=0;
	     while(p!=NULL&&flag<count)
	     	 {
	     	 	  printf(" %d->",p->info);
	     	 	  p=p->link;
	     	 	  flag++;
	     	 }

	     printf("NULL");
}
int main()
{
	   struct node *head;
	   head=NULL;
	   head=create(head);
	   display(head);
	   int x=loop(head);
	   if(x)
           {
                 printf("\n Yes loop exist in list");
           }
        else
                  printf("\n No loop does not exist");

}
