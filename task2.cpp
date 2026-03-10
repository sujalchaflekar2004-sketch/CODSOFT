#include <iostream>
using namespace std;

int main()
{
    double a,b;
    int option;

    cout<<"1.Add\n2.Subtract\n3.Multiply\n4.Divide\n";
    cout<<"Choose option: ";
    cin>>option;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    if(option==1)
        cout<<"Answer = "<<a+b;
    else if(option==2)
        cout<<"Answer = "<<a-b;
    else if(option==3)
        cout<<"Answer = "<<a*b;
    else if(option==4)
    {
        if(b==0)
            cout<<"Cannot divide by zero";
        else
            cout<<"Answer = "<<a/b;
    }
    else
        cout<<"Wrong option";

    return 0;
}