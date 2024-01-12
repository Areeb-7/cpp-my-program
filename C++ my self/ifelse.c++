//05.10.2023
#include<iostream>
using namespace std;
int main()
{
    int num;
    char s;
    // string arr=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'];
    repete:
    
    cout<<"Enter the integer number"<<endl;
    cin>>num;
    cout<<num;
    if(num % 2 == 0)
    {
        cout<<endl<<"Your Number is Even";
    }
    else
    {
        cout<<"Your Number is odd";
    }
    cout<<endl<<"Do you want continue press 'y' else enter 'exit' ";
    cin>>s;

    if(s=='y'||s=='Y')
    {
        goto repete;
    }else{
        return 0;
    }

    

}