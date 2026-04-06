#include<stdio.h>
#include<stdlib.h>
struct queueusingLL
{
    int data;
    int rear,front;
    struct queueusingLL* next;
};
struct queueusingLL *front,*rear=NULL;

struct queueusingLL* createnode()
{
    int value;
    printf("Enter the value to insert\n");
    scanf("%d",&value);
    struct queueusingLL *newnode;
    newnode= (struct queueusingLL*)malloc(sizeof(struct queueusingLL));
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}
void enqueue()
{
    struct queueusingLL* newnode=createnode();
    if(rear==NULL)
    {
        front=newnode;
        rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
    printf("Value Inserted\n");

}
void dequeue()
{
    struct queueusingLL*temp;
    if(front==NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        temp=front;
        front=front->next;
        printf("%d Deleted \n",temp->data);
        free(temp);
        if(front==NULL)
        {
            rear=NULL;
        }
    }
}
void display()
{
    struct queueusingLL*temp;
    temp=front;
    if(front==NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    {
    
    while (1)
    {
        int ch;
    printf("\nEntet choice to perform operation\n");
    printf("1.Insert\n2.Delete\n3.Display\n");
    printf("4.Exit\n");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        enqueue();
        break;
    case 2:
        dequeue();
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
}