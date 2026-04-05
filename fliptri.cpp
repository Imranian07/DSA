#include<iostream>
using namespace std;
int main()
{
    
    int a=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<6-i;j++){
            cout<<" ";
        }
        for(int k=0;k<i;k++)
        {
            cout<<"*";
        }

      cout<<endl;
    }
      
}