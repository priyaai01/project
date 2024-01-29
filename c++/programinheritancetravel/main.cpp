#include<iostream>
using namespace std;
class travel
{
public:

    int km;

    string state()
    {

        string state="which state";
        cout<<"TRAVEL"<<endl;
        cout<<"how to go state"<<endl;
        cin>>state;
        return state;

    }
     int ticketbooked()
    {
        int ticket1;
        cout<<"the booked for ticket number"<<endl;
        cin>>ticket1;
        return ticket1;
    }
    int killometer()
    {
        cout<<"How much killometer"<<endl;
        return km;

    }
    int members()
    {
    int member1;
    cout<<"How many members"<<endl;
    cin>>member1;
    }
};
int main()
{
    travel t;
    t.state();
    t.ticketbooked();
    t.killometer();
    cin >> t.km;
    t.members();
    if(t.members()>=20)
    {
        cout<<"more than members"<<endl;

    }
    else
    {
        cout<<"less than members"<<endl;
    }
return 0;






}
