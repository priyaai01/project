#include<stdio.h>
int main()
{
    int a=14;
    int b=12;
    int c;
    addition(a,b);
    //subtraction(a,b);
    //divition(a,b);
    //multiplication(a,b);
    //greaterthan(a,b);
    //lessthan(a,b);
    //increment();
    //decrement(a,b);

    switch(a,b);
    return 0;
}
int addition(int a,int b)
{
    int c;
    printf("ADDITION");
    c=a+b;
    printf("addition value in\n..%d",c);
}
int subtraction(int a,int b)
{
    int c;
    printf("SUBTRACTION");
    c=a-b;
    printf("subtraction value in\n..%d",c);
}
int divition(int a,int b)
{

    printf("DIVITION");
    float c=(float) a/b;
    printf("divition value in\n..%f",c);
}
int multiplication(int a,int b)
{
    int c;
    printf("MULTIPLICATION");
    c=a*b;
    printf("multiplication value in\n..%d",c);

}

int greaterthan(int a,int b)
{
    int c;
    printf("GREATERTHAN");
    c=a>b;
    printf("greaterthan value in\n..%d",c);
}
int lessthan(int a,int b)
{
    int c;
    printf("LESSTHAN");
    c=a<b;
    printf("lessthan value in\n..%d",c);
}
int increment(int a)
{

    printf("INCREMENT");
    printf("the increment value in\n..%d",a);
    a++;
}
int decrement(int b)
{
    printf("DECREMENT");
    printf("the decrement value in\n..%d",b);
    b--;
}



