//05.10.2023
#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter the alphabets:-";
    cin>>a;
    cout<<endl<<a<<"  ";
    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
    {
        cout<<"Character is Vowel"<<endl<<endl;
    }
    else{
        cout<<"Character is consonent"<<endl<<endl;
    }
    return 0;
}