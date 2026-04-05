#include<stdio.h>
int main()
{
    int i,j,m,n,value,a=0;
    printf("enter m and n of m X n matrix : ");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("Enter element of 2D array : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&arr[i][j]);
    }
    printf("Enter element to find in 2D array : ");
    scanf("%d",&value);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        if(arr[i][j]==value)
        {
            printf("Element found");
            a++;
            break;
        }}

    {    
         if(a==0)
         printf("Element not present in the array");
    }

}