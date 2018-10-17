/* program to convert a infix expression to postfix expression */
                               // "A+B*(C^DEe)^(F+G*H)-I"


#include<stdio.h>
char stack[50];
int isoperand(char ch)
{
	  if(ch>='a' && ch<='z' ||ch>=' A' &&ch<='Z' )
	  	   return 1;
	  else
	       return 0;	

}
int precedence(char ch)
{
	    switch(ch)
	     {
	     	 case '+':
	     	 case '-':   return 1;

	     	 case '*':
	     	 case '/':   return 2;

	     	 case '^' :  return 3;

	     }
}
void infix_to_postfix(char infix[])
{
       int i=0;
       if(isoperand(infix[i]))
       	  {
       	  	   printf()
       	  }
}
int main()
{
	 char infix[20]="A+B*(C^DEe)^(F+G*H)-I";
	 infix_to_postfix(infix);

}                               