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
    repete:
    cin>>spl;
    
    if(spl==1||spl==2||spl==3)
    {
    
    if(spl==1)
        {
            
            int f;
            cout<<"Enter the Number";
            cin>>f;
            square(f);
                   
 
        }else if(spl==2)
        {
            int g;
            cout<<"Enter the Number";
            cin>>g;
            cube(g);
                   

        }else 
        {
            int h;
            cout<<"Enter the Number";
            cin>>h;
            square(h);
            cube(h);
        
        }
        
    }else
    {
        cout<<"Invalide choice\n";
        cout<<"Enter the 1,2,3\n";
        goto repete; 
        
    } 
     
    return 0;
}
