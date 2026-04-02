#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("Enter the row and column of the array : ");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("Enter the elements of the array : ");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("diagonal element");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if((i==j)){
            printf(" %d ",arr[i][j]);}
        }
        
    }
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i][n-(i+1)]);
    }
}