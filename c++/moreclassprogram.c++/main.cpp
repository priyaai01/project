#include<iostream>
using namespace std;
class student
{
public:
    int reg;
    char name[20];
    int age;
    student()
    {
        cout<<"reg:";
        cin>>reg;
        cout<<"name:";
        cin>>name;
        cout<<"age:";
        cin>>age;
        cout<<"\n";
    }
};
class office
{
public:
    int user_id;
    char name[20];
    int age;
    void employers()
    {
        cout<<"user_id:";
        cin>>user_id;
        cout<<"name:";
        cin>>name;
        cout<<"age:";
        cin>>age;
    }
};

int main()
{
    student st;
    office of;
    of.employers();
    return 0;
}

