#include<iostream>
using namespace std;
class school
{
private:
    int regno;
public:
    string name;
    void regno(int r)
    {
        regno=r;
        cout<<regno<<endl;
    }
    int  stdentname()
    {
        cout<<"name:"<<name<<endl;
    }


};
int main()
{
    school scl;
    scl.regno(50);
    scl.studentname(
                    );
    return0;
}
