
#include<iostream>
using  namespace std;
class myfirstclass
{
public:
    int a=20;
    void addition()

    {
        int x,y;
        cin>>x>>y;
        cout<<(x+y);
        cout<<(x*y);
        cout<<(x-y);
    }
};

    int addition()
{
    int a,b;
    cin>>a>>b;
    a=a+b;
    cout<<a;

}
int main()
{
    int addition();
    myfirstclass mfc,mfc1;
    cout << mfc.a;
    mfc.addition();
    mfc1.addition();
    return 0;
}





