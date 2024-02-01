#include<iostream>
using namespace std;
int main()
/*{
    string name;
    cout<<"Enter your name:"<<endl;
    cin>>name;
    fflush(stdin);
    cout<<"Enter your name:"<<endl;
    getline(cin,name);
    cout<<name<<endl;
    return 0;
}*/

/*{
    string animalsname;
    cout<<"Enter the animal name:"<<endl;
    cin>> animalsname;
    getline(cin,animalsname);
    cout<<animalsname<<endl;


    fflush(stdin);

    cout<<"Enter the animal name:"<<endl;

    cout<<animalsname<<endl;
    return 0;



}*/



{
    string firstname;
    string lastname;
    cout<<"FIRST NAME:"<<endl;
    cin>>firstname;
    cout<<"LAST NAME:"<<endl;
    cin>>lastname;
    cout<<firstname+" "+lastname<<endl;
    //string fullname=firstname.append(lastname);
    firstname.push_back ('\ns');
    cout<<firstname<<endl;
    lastname.push_back ('\ns');
    cout<<lastname<<endl;
    return 0;
}








