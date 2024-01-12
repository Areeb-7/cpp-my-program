#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
repete:
if (n % 2 != 0)
{
    for(int i = 1;i<=(n+1)/2;i++)
    {
        for (int j = (n+1)/2; j >i; j--)
        {
           cout<<" ";
        }
        for (int k = 1; k <= i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    
    }
    for (int i = 2; i <=(n+1)/2; i++)
    {
       for(int j = 1; j<i ; j++)
       {
        cout<<" ";
       }
       for(int k = n/2; k>=i-1;k--)
       {
        cout<<"*";
       }
       cout<<"\n";
    }
}
else
{
    cout<<"Enter the odd number\n";
    cin>>n;
    goto repete;
}
    return 0;

}