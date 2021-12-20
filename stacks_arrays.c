#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int i;
int ele;
int top = -1, stack[SIZE];
void push(int ele)
{ 
  stack[++top] = ele;
}
  int pop()
{
    return(stack[top--]);
}
 int peek()
{
   return(stack[top]);
}
 void display()
{
    for(i = top; i>=0;i--)
      printf("%d\n",stack[i]);
}
int main()
{ 
    int ch;
    while(1){
    printf("\n 1-push\n 2-pop\n 3-peek\n 4-display \n 5-exit");
    printf("enter ur choice");
    scanf("%d" ,&ch);
    switch(ch)
    {
             case 1:if(top==SIZE-1)   
                      printf("stack overflow");
                     else{
                       printf("enter element to be inserted");
                       scanf("%d", &ele);
                        push(ele);
                    }
                     break;
            case 2:if(top==-1)
                    printf("stack underflow");
                   else
                    printf("deleted element is %d",pop());
                   break;
            case 3:if(top==-1)
                    printf("stack underflow");
                   else
                    printf("top element is %d",peek());
                   break;
            case 4:if(top==-1)
                    printf("stack underflow");
                   else
                    display();
                    break;
           case 5:exit(0);
           }
           }
           }
           /*OUTPUT:
1-push
2-pop
3-peek
4- display
5- exit
1
Enter the element: 1

1-push
2-pop
3-peek
4- display
5- exit
1
Enter the element: 2

1-push
2-pop
3-peek
4- display
5- exit
1
Enter the element: 3

1-push
2-pop
3-peek
4- display
5- exit
1
Enter the element: 4

1-push
2-pop
3-peek
4- display
5- exit
1
Enter the element: 5

1-push
2-pop
3-peek
4- display
5- exit
4
54321
1-push
2-pop
3-peek
4- display
5- exit
2
Deleted element is 5
1-push
2-pop
3-peek
4- display
5- exit
3
Top element is 4
1-push
2-pop
3-peek
4- display
5- exit
4
4321
1-push
2-pop
3-peek
4- display
5- exit
5 */
