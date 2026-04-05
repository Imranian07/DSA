#include<iostream>
using namespace std;
int main()
{
    
    //cout<<"hii";
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            if((i==j)||(i+j==10+1))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}