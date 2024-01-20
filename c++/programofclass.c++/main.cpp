#include<iostream>
using namespace std;
class myvalue
{
public:
    int a=0;
    void Divition();
    void Modulus();
    void Increment();


    int addition()
    {
        int a,b;
        cout<<"\n Addition";
        cout<<"Enter the  value a:";
        cin>>a;
        cout<<"Enter the  value b:";
        cin>>b;
        cout<<(a+b);
    }
    int subtraction()
    {
        int a,b;
        cout<<"\n Subtraction";
        cout<<"Enter the value a:";
        cin>>a;
        cout<<"Enter the value b:";
        cin>>b;
        cout<<(a-b);
    }
        int multiplication()
        {
            int a,b;
            cout<<"\n Multiplication";
            cout<<"Enter the value a:";
            cin>>a;
            cout<<"Enter the value b:";
            cin>>b;
            cout<<(a*b);
        }
};

void myvalue :: Divition()
{
    int a,b;
    cout<<"\n Divided";
    cout<<"Enter the value a:";
    cin>>a;
    cout<<"Enter the value b:";
    cin>>b;
    cout<<(a/b);

}
void myvalue :: Modulus()
{
    int a,b;
    cout<<"\n Modulus";
    cout<<"Enter the value a:";
    cin>>a;
    cout<<"Enter the value b:";
    cin>>b;
    cout<<(a%b);
}
void myvalue :: Increment()
{
    int a;
    cout<<"\n Increment:";
    cin>>a;
    while(a<5)
    { ++a;
       cout<<"Enter the value a:"<<a;

    }



}
int main()
{
    myvalue mv,mv1;
    mv.addition();
    mv.subtraction();
    mv.multiplication();
    mv.Divition();
    mv.Increment();
    return 0;

}
