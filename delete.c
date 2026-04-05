#include<stdio.h>
int main()
{
    int i,n,index,value;
    printf("Enter the no. of elements of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entet the index to delete the value : ");
    scanf("%d",&index);
    if(index>=0&& index <n){
    for(i=index;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
}else{
    printf("index is out of range \n");
}
    printf("Elements of the array : ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }

}