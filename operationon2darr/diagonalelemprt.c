#include<stdio.h>
int main()
{
    int m,n,i,j,a=0;
    printf("Enter the no.of row in an array : ");
    scanf("%d",&m);
    printf("Enter the no.of column in an array : ");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter element of the array : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }        
    printf("element of the array : \n");
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<1;j++)
        {
            
            printf("%d ",arr[i][i]);            
        }
        printf("\n");
    } 
}