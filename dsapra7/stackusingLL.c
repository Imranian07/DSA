#include<stdio.h>
#include<stdlib.h>
struct stackusingLL
{
    int data;
    int top;
    struct stackusingLL*next;
};
struct stackusingLL * top=NULL;

struct stackusingLL* createnode()
{
    int value;
    printf("Enter a value to insert into stack : ");
    scanf("%d",&value);
    struct stackusingLL* newnode;
    newnode=(struct stackusingLL*)malloc(sizeof(struct stackusingLL));
    newnode ->data=value;
    newnode->next=NULL;
    return newnode;
}
void push()
{
    struct stackusingLL* newnode=createnode();
    if(top==NULL)
    {
        top=newnode;
    }
    else
    {
        newnode->next=top;
        top=newnode;
    }
    printf("Value Inserted\n");
}
void pop()
{
    struct stackusingLL* temp;
    if(top==NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        temp=top;
        top=top->next;
        printf("%d deleted",temp->data);
        free(temp);
    }
}
void display()
{
    struct stackusingLL* temp;
    temp=top;
    if(top==NULL)
    {
        printf("[Stack is Empty]\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            printf(" ");
            temp=temp->next;
        }
    }
}
int main()
{
    
    while (1)
    {
        int ch;
    printf("\nEntet choice to perform operation\n");
    printf("1.Push\n2.Pop\n3.Display\n");
    printf("4.Exit\n");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;    
    case 3:
        display();
        break;
    case 4:
        exit(0);    
    default:
        printf("Wrong choice!\n Enter choice again");
        break;
    }
    }
    
}