//06.10.2023
#include<iostream> 
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
       for(int j = 1; j<i ; j++)
       {
        cout<<" ";
       }
       for(int k = n+1-i; k>0;k--)
       {
        cout<<"*";
       }
       cout<<endl;
    }
    return 0;
    
}