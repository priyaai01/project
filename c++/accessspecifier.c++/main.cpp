/*#include<iostream>
using namespace std;
class accessspecifier
{
private:
    int z=15;
protected:
    int pc=45;
public:
    int a,b;
    void number()
    {
        a=z;
        cout<<a;
        a=pc;
        cout<<a;
    }
};
int main()
{
    accessspecifier as;
    as.b=12;
    cout<<as.b;
    as.number();
    return 0;
}*/


#include<iostream>
using namespace std;
class shopping
{
private:
    int cost;

public:
    string productname;
    void highestcost(int c)
    {
        cost=c;
        cout<<cost<<endl;
    }
    int getproduct()
    {
        cout<<"cost"<<cost<<endl;
    }

};
int main()
{
    shopping sp;
    sp.highestcost(50);

    sp.getproduct();


}



