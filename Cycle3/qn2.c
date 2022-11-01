 #include <stdio.h>
 #include<stdlib.h>
 #define Size 20
 int arr[20];
 int top1=-1;
 int top2=Size;


 //pushing to stack 1 
 void push1(int item)
 {
    if(top1<top2-1)
{  
arr[++top1]=item;

}
else
printf("Stack Full");

 }

 //pushing to stack 2 
 void push2(int item)
 {
    if(top1<top2-1)
    {
        arr[--top2]=item;
    }
    else
    printf("Stack Full");
 }
//popping from stack 1
void  pop1()
 {
int ele;


if(top1!=-1)
{
    ele=arr[top1--];
  printf("%d is popped from the stack \n",ele);
}
else 
    printf("Stack empty ");
 }
//popping from stack 2 
void pop2()
{
int ele;
if(top2<Size)
{
   ele=arr[top2++];
    printf("%d is popped from the stack \n",ele);
}
else 
    printf("Stack empty ");
 }

//displaying stack 1 
 void display1()
 {   
    printf("Stack 1 \n");
for(int i=top1;i>=0;i--)
{
    printf("%d ",arr[i]);
}
}
//dispalying stack2 
void display2()
 {   
    printf("Stack 2\n");
for(int i=top2;i<Size;i++)
{
    printf("%d ",arr[i]);
}
}

int input()
{
    int number;
    scanf("%d", &number);
    return (number);
}
  
 

//main fxn 
int main()
{
 int n1;int n2;int p1;int p2;int c=5;
 int choice;
 while(c>0)
 {
 printf(" \n ");
 printf("\t\t\t MENU\t\t\t\n");
 printf("\t\t-----------------------\t\t\t\n");
  printf(" \n");
 printf("Select 1 of the following choices\n");
printf("Press 1 to push to stack1\n");
	printf("Press 2 to push to stack 2 \n");
	printf("Press 3 to pop from stack1 \n");
    printf("Press 4 to pop from stack2 \n");
    printf("Press 5 to display stack1\n");
    printf("Press 6 to display stack2 \n");
    printf("Press 7 to exit \n");
	printf("Enter your choice:\n");
	choice = input();
	  printf(" \n ");
	switch (choice) {
	case 1: {
		 printf("ENTER THE NUMBER OF ELEMENTS TO BE PUSHED TO STACK 1\n");
         printf("Note :The max no of elemnts that can be pushed is 20.\n");
         scanf("%d",&n1);
         printf("ENTER THE ELEMENTS TO BE PUSHED TO STACK 1\n");
        while(n1!=0)
         {  
               int item;
               scanf("%d",&item);
               push1(item);
               n1--;
         }
		break;
	}
	case 2: {
        printf("ENTER THE NUMBER OF ELEMENTS TO BE PUSHED TO STACK 2\n");
        printf("Note :The max no of elemnts that can be pushed is 20.");
        scanf("%d",&n2);
        printf("ENTER THE ELEMENTS TO BE PUSHED TO STACK 2\n");
        while(n2!=0)
      {  
         int item;
         scanf("%d",&item);
         push2(item);
         n2--;
      }
     break;
		 
	}
	case 3: {
		  printf("ENTER THE NUMBER OF ELEMENTS TO BE POPPED FROM STACK 1\n");
          scanf("%d",&p1);
          while(p1!=0)
          {
            pop1();
            p1--;
          }
          break;
	}
case 4: {
		  printf("ENTER THE NUMBER OF ELEMENTS TO BE POPPED FROM STACK2\n");
          scanf("%d",&p2);
          while(p2!=0)
          {
            pop2();
            p2--;
          }
          break;
	}

case 5:
        {
          display1();
          break;
                 }

case 6: {
       display2();
       break;
}
case 7:
{
printf("Exiting the program ");
exit (0);
}
default:
		printf("Wrong Input\n");
	
	
}
}
return 0;
}
