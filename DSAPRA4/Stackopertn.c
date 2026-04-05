#include<conio.h>
int main()
{
    int n, top=-1,c=0,value;
    printf("Enter the no. of elements in the stack : ");
    scanf("%d",&n);
    int stack[n];
    while(c!=4)
    {
        printf("Enter the choice to perform operation : \n");
        printf(" 1.Push\n 2.Pop \n 3.Display \n 4.Exit \n ");
        scanf("%d",&c);
        switch (c)
        {
            case 1:
            if(top==n-1){ printf("---Stack full---\n");}
            else {
                printf("Enter element to push : ");
                scanf("%d",&value);
                top++;
                stack[top]=value;
                }
            break;
            case 2:
                if(top==-1){printf("stack empty \n"); break;}
                else
                {
                    int x=top;
                    printf("%d deleted from stack : \n",stack[x]);
                    top--;
                }
                break;
            case 3:
                printf("Elements of the stack :\n");
                for(int i=0;i<=top;i++)
                {
                    printf(" %d ",stack[i]);
                }
                printf("\n");
                break;
            case 4:
                printf("Exiting..");
                break;
            default: 
                printf("Wrong choice\n");
            break;
        }
   
    }

}
