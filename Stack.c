
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<stdlib.h>


#define MAX 10
int top=-1,stack[MAX];
void push();
void pop();
void display();

void main()
{
  int ch;
  clrscr();
  while(1)
  {
    printf("\n***STACK MENU***");
    printf("\n\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
    printf("\n\nENTER YOUR CHOICE(1-4):");
    scanf("%d",&ch);

    switch(ch)
    {
     case 1:push();
	    break;

     case 2: pop();
	    break;
     case 3: display();
	    break;
     case 4:exit(0);
     default: printf("\nWrong choice");
     }
     }
     }
     void push()
     {
      int val;
     if(top==MAX-1)
     { printf("\nSTACK IS FULL");
     }
     else
     { printf("\n ENTER ELEMENTS TO PUSH:");
     scanf("%d",&val);
     top=top+1;
     stack[top]=val;
     }
     }
     void pop()
     {
      if(top==-1)
     { printf("\nSTACK IS EMPTY");
      }
      else
      { printf("\nDELETED ELEMENT IS %d",stack[top]);
      top=top-1;
      }
      }
      void display()
      { int i;
      if(top==-1)
      { printf("\n STACK IS EMPTY");
      }
      else
     { printf("\n STACK IS...");
      for(i=top;i>=0;--i)
      printf("%d\n",stack[i]);
      }
      getch();
      }
