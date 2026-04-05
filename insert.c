#include<stdio.h>
int main()
{
    int i,n,index,value;
    printf("Enter the no. of elements of the array : ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entet the index to insert : ");
    scanf("%d",&index);
    printf("Entet the value to insert : ");
    scanf("%d",&value);
    if(index>=0&& index <n){
    for(i=n;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    n++;
    }
    else
    {
    printf("index is out of range \n");
    }
    arr[index]=value;
    printf("Elements of the array : ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
}