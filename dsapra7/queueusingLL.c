#include<stdio.h>
#include<stdlib.h>
struct queueusingLL
{
    int data;
    int rear,front;
    struct queueusingLL* next;
};
struct queueusingLL *front,*rear=NULL;

struct queueusingLL createnode()
{
    int value;
    printf("Enter the value to insert\n");
    scanf("%d",&value);
    struct queueusingLL *newnode;
    newnode= (struct queueusingLL*)malloc(sizeof(struct queueusingLL));
    newnode->data=value;
}
