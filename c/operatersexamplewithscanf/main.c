#include<stdio.h>
int main()
{
    int a,b,v;
    printf("Enter the value");
    scanf("%d",&a);
    printf("Enter the value");
    scanf("%d",&b);

    //addition(a,b);
    //subtraction(a,b);
    //multiplication(a,b);
    //divition(a,b);
    //greaterthan(a,b);
    //lessthan(a,b);
    //increment(a);
    //decrement(b);
    //assignmentopetaters(a,b);
    //comparisionopetaters(a,b);
    logicalopetaters(a,b);
    return 0;

}
int addition(int a,int b)
{
    int v=a+b;
    printf("ADDITION");
    printf("%d",v);
}
int subtraction(int a,int b)
{
    int v=a-b;
    printf("SUBTRACTION");
    printf("%d",v);
}
int multiplication(int a,int b)
{
    int v=a*b;
    printf("MULTIPLICATION");
    printf("%d",v);

}
int divition(int a,int b)
{
    float v=(float)a/b;
    printf("DIVITION");
    printf("%d",v);

}
int greaterthan(int a,int b)
{
    int v=a>b;
    printf("GREATER");
    printf("%d",v);
}
int lessthan(int a,int b)
{
    int v=a<b;
    printf("LESSTHAN");
    printf("%d",v);
}
int increment(int a)
{

    while(a<7)
{
    printf("The increment value\n%d",a);
    a++;

}


}
int decrement(int b)
{
    while(b>12)
    {
        printf("The decrement value\n%d",b);
        b--;
    }
}
int assignmentopetaters(int a,int b)
{
     printf("ASSIGNMENT\n");
     printf("ADDED\n");
     a+=b;//a=a+b
          printf("The assign value is %d\n",a);
     printf("SUB\n");
     a-=b;//a=a-b
          printf("The assign value is %d\n",a);
      printf("MULTI\n");
      a*=b;//a=a*b
      printf("The assign value is %d\n",a);
      printf("DIVIDED\n");
      float v=(float)a/b;
      printf("The assign value is %f",a);


}
int comparisionopetaters(int a,int b)
{
    printf("COMPARE\n");
    printf("less\n");
    int v=a<b;
    printf("The compare value\n %d",v);
    printf("great\n");
    int u=a>b;
    printf("The compare value\n%d",u);
    printf("lessthanor\n");
    printf("The compare value%d",(a<=b));
    printf("The greterthanor\n");
    printf("The compare value%d",(a>=b));
    printf("equal\n");
    printf("The compare value%d",(a==b));
}
int logicalopetaters(int a,int b)
{
    printf("LOGICAL");
    printf("And");
    printf("the value is%d",(a>23)&&(a<12));

    printf("Or");
    printf("the value is%d",(b>45)||(b<12));
    printf("NOT");
    printf("the value is%d",!(a>72));

}



