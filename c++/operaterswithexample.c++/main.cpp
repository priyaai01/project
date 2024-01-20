
#include<iostream>
using namespace std;
int main()
{
    int firstvalue,secondvalue,total,op;

    cout << "Enter the firstvalue\n";
    cin >> firstvalue;
    cout <<"Enter the secondvalue \n";
    cin >> secondvalue;
    cout << "Enter the operter \n";
    cin >> op;
    switch(op)

    {

case 1:
    total=firstvalue+secondvalue;
    cout << "Added value"<<total;
    break;
case 2:
    total=firstvalue-secondvalue;
    cout << "Sub value"<<total;
    break;
case 3:
    total=firstvalue*secondvalue;
    cout << "Multi value"<<total;
    break;
case 4:
    float total=float (firstvalue/secondvalue);
    cout << "Div value"<<total;
    break;
case 5:
    firstvalue++;
    cout << "Increment value"<<firstvalue;
    break;

}


}
