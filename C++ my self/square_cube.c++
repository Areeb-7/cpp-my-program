//05.10.2023
#include<iostream>
using namespace std;
void square(int x)
{
    int sq;
    sq=x*x;
    cout<<"Square of "<<x<<"="<<sq<<endl;
}
void cube(int y)
{
    int cu;
    cu=y*y*y;
    cout<<"Cube of "<<y<<"="<<cu<<endl;
}    
int main()
{
    int spl;
    cout<<"What do you want:-"<<endl;
    cout<<"do you want these three things so press the number of things"<<endl;
    cout<<"1.Square"<<endl;
    cout<<"2.Cube"<<endl;
    cout<<"3.Both"<<endl;
    cin>>spl;
    switch(spl)
    {
        case 1:
               int f;
               cout<<"Enter the Number";
               cin>>f;
               square(f);
               break;
 
        case 2:
               int g;
               cout<<"Enter the Number";
               cin>>g;
               cube(g);
               break;

        case 3:
               int h;
               cout<<"Enter the Number";
               cin>>h;
               square(h);
               cube(h);
               break;

    }
    

}
