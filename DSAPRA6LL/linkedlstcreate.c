#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* Next;
};
struct Node *head=NULL;
int count=0;
struct Node* createnode()
{
    int value;
    printf("Enter a Value to Insert : ");
    scanf("%d",&value);
    struct Node* Newnode;
    Newnode=(struct Node*)malloc(sizeof(struct Node));
    Newnode->data=value;
    Newnode->Next=NULL;
    return Newnode;
}
void insertatbeginning()
{

    struct Node *Newnode;
    Newnode = createnode();
    if(head==NULL)
    {
        head=Newnode;
    }
    else
    {
        Newnode->Next=head;
        head=Newnode;
    }
    printf("Value Inserted\n");
    count++;

}
void insertatlast()
{
    struct Node *Newnode;
    struct Node *temp;
    temp=head;

    Newnode = createnode();
    if(head==NULL)
    {
        head=Newnode;
    }
    else
    {
        for(;temp->Next !=NULL;temp=temp->Next)
      //  while(temp->Next !=NULL)
    {
        //temp=temp->Next;
    }
        temp->Next=Newnode;
    }
    printf("Value Inserted\n");
    count++;

}
void deleteatbeginning()
{
     if(head==NULL)
    {
        printf("Linked List is Empty\n");
    } 
    else
    {
        struct Node *temp;
        temp=head;
        head=head->Next;
        printf("%d Deleted\n",temp->data);
        free(temp);
        count--;
    }
}
void deleteatlast()
{
  //  struct Node *Newnode;
    struct Node *temp,*temp1;
    temp=head;

   // Newnode = createnode();
     if(head==NULL)
    {
        printf("Linked List is Empty\n");
    } 
    else
    {
       // for(;temp->Next !=NULL;temp=temp->Next)
        while(temp->Next !=NULL)
    {
        temp1=temp;
        temp=temp->Next;
    }
    temp1->Next=NULL;
    printf("%d Deleted\n",temp->data);
    free(temp);  
    count--;
    }
}
void insertatkeyvalue()
{
    printf("Enter a Position to Insert a Value\n");
    printf("Enter a value Between 1 to %d : ",count+1);
    int pos;
    scanf("%d",&pos);
    if(pos<=0||pos>count+1)
    {
        printf("Position is out of linked list !\n [Enter again]\n");
        insertatkeyvalue();
        return;
    }
    if(pos==1){
        insertatbeginning();
        return;
    }
    if(pos==count+1)
    {
        insertatlast();
        return;
    }

    struct Node *Newnode;
    struct Node *temp,*temp1;
    temp=head;
    Newnode = createnode();
    if(head==NULL)
    {
        head=Newnode;
    }
    else
    {
        for(int i=1;pos>i;i++)
    {
        temp1=temp;
        temp=temp->Next;
    }
        temp1->Next=Newnode;
        Newnode->Next=temp;
    }
    count++;
    printf("Value Inserted\n");
}
deleteatanyposition()
{
    if(count==0){
        printf("Linked list is Empty !\n");
        return;
    }
     printf("Enter a Position to Delete a Value\n");
    printf("Enter a value Between 1 to %d : ",count);
    int pos;
    scanf("%d",&pos);
    if(pos<=0||pos>count)
    {
        printf("Position is out of linked list !\n [Enter again]\n");
        deleteatanyposition();
        return;
    }
    if(pos==1){
        deleteatbeginning();
        return;
    }
    if(pos==count)
    {
        deleteatlast();
        return;
    }

    struct Node *Newnode;
    struct Node *temp,*temp1,*temp2;
    temp=head;
        for(int i=1;pos>i;i++)
    {
        temp1=temp;
        temp=temp->Next;
        temp2=temp->Next;
    }
        temp1->Next=temp2;
    count--;
    printf("%d Deleted\n",temp->data);
    free(temp);
}
void display()
{
    struct Node *temp;
    temp=head;
    if(head==NULL)
    {
        printf("Linked List is Empty\n");
    }
    else
    {
    while(temp !=NULL)
    {
        printf("%d",temp->data);
        printf(" ");
        temp=temp->Next;
    }
    printf("\n");
    }
}
int main()
{
    struct Node *Newnode;
   int ch;
   printf("-----LINNKED LIST-----\n");
   while (1)
 {
   printf("Enter choice to perform operation\n");
   printf("1.Insert at Beginning\n2.Display\n3.Insert at last\n4.Delete at begining\n");
   printf("5.Delete at last\n6.Insert at any Positin\n7.Delete at any Position\n");
   printf("8.Exit \n");
   scanf("%d",&ch);
   
   switch (ch)
   {
   case 1:
    insertatbeginning();
    break;
   case 2:
    display(); 
    break;
   case 3:
    insertatlast();
     break; 
   case 4:
    deleteatbeginning();
    break; 
   case 5:
    deleteatlast();
    break; 
   case 6:
    insertatkeyvalue();
    break; 
   case 7:
    deleteatanyposition();
    break;   
   case 8:
    exit(0); 
   default:
   printf("Wrong choice !\n");
    break;
   }}
    
}