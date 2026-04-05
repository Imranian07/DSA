#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int front,rear;
    int size;
    int *arr;
};
void delete(struct queue *sta)
{
    if(sta->front==-1)
    {
        printf("--queue is empty--");
    }
    else
    {
        int x=sta->front;
        printf("%d deleted \n",sta->arr[x]);
        if(sta->front == sta->rear) sta->front = sta->rear =-1;
        else sta->front=(sta->front+1) % sta->size;
    }
}
void insert(struct queue *sta,int value)
{
    if((sta->rear+1) % sta->size == sta ->front)
    {
        printf("--Queue is full--\n ");
    }
    else
    {
        if(sta->front==-1) sta->front=0;
        sta->rear=(sta->rear+1) % sta->size;
        sta->arr[sta->rear]=value;        
    }
}
void display(struct queue sta)
{
    if(sta.front==-1)
    {
        printf("--queue is empty--");
    }
    else
    {
        for(int i=sta.front;i<=sta.rear;i=i+1 % sta.size)
        {
            printf(" %d ",sta.arr[i]);
        }
    }
}
int main ()
{
    struct queue q;
    q.front=-1;
    q.rear=-1;
    printf("Enter the size of queue : ");
    int n,ch=0;
    scanf("%d",&n);
    q.size=n;
    q.arr=(int*)malloc(q.size*sizeof(int));
    while (ch!=4)
    {
    printf("\nEnter the choice to perform operation : \n ");
    printf("1.Insert\n 2.delete\n 3.Display \n 4.exit\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    printf("Enter the value to insert : ");
    int value;
    scanf("%d",&value);
       insert(&q,value); 
        break;
    case 2:
       delete(&q);
        break;
    case 3:
       display(q);
        break;
    case 4:
        free(q.arr);
        exit(0);
    default:
    printf("--Wrong Choice--\n");
        break;
    }
}}