#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the no. of elements of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements of the array");
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
}