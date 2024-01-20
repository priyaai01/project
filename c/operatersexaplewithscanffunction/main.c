#include <stdio.h>
int main()
{

     additionprogram(getvalueB(),getvalueA() );
     subtractionprogram( getvalueB(),getvalueA() );
     multiplicationprogram(getvalueB(),getvalueA());
     divisionprogram(getvalueB(),getvalueA());
     modulasprogram(getvalueB(),getvalueA());
     incrementprogram(getvalueB(),getvalueA());
     decrementprogram(getvalueB(),getvalueA());
     logicalprogram(getvalueB(),getvalueA());
     comparisonprogram(getvalueB(),getvalueA());
     assignmentprogram(getvalueB(),getvalueA());
     return 0;
}
    int getvalueA()
    {
     int myvalue;
     printf("\n\tEnter the value A:\n");
     scanf("%d",&myvalue);
     return myvalue;
    }
    int getvalueB()
    {
        int myvalue;
        printf("\n\tEnter the value B:\n");
        scanf("%d",&myvalue);
        return myvalue;

    }
     int additionprogram(int b,int a)
    {
      int c = a+b;
     printf("\n Added value is......%d\n",c);
    }
    int subtractionprogram(int b,int a)
    {

    int c = a-b;
    printf("\n subtracted value is.......%d\n",c);
    }
    int multiplicationprogram(int b,int a)
    {

        int c = a*b;
        printf("\n multiplied value is.......%d\n",c);
    }
    int divisionprogram(int b, int a)
    {
        float c = (float) a/b;
        printf("\n divided value is..........%f\n",c);
    }
    int modulasprogram(int b,int a)
    {
        int c = a%b;
        printf("\n modulas value is.......%d\n",c);
    }
    int incrementprogram(int a)
    {
    for(int a; a<20; a++)
    {
        printf("a value is.....%d\n",a);
    }
    for(int b; b<10 ; ++a)
    {
        printf("\n b value is........%d\n",b);
    }
    }
    int decrementprogram(int b,int a)
    {

        while(a>5)
        {
            printf("a value is.......%d\n",a);
            a--;
        }
        while(b>10)
        {
            printf("b value is.......%d\n",b);
            --b;
        }
    }


    int logicalprogram(int b,int a)
    {

            printf("\n The value of this logical and operator((a==b)&& (a<b)) is:%d\n",((a == b) && (a < b)));
            printf("\n The value of this logical or operator ((a==b) || (a<b)) is:%d\n",((a == b) || (a < b)));
            printf("\n The value of this logical not operator (!(a==b)) is : %d\n",(!(a == b)));

    }
int comparisonprogram(int a,int b)
        {
            printf("\t\n*****comparison values*****");
            printf("\n The value of a == b is: %d\n", (a == b));
            printf("\n The value of a != b is:%d\n", (a != b));
            printf("\n The value of a >= b is: %d\n", (a >= b));
            printf("\n The value of a <= b is: %d\n", (a <= b));
            printf("\n The value of a > b is: %d\n", (a > b));
            printf("\n The value of a < b is: %d\n", (a < b));


        }
        int assignmentprogram(int a,int b)
        {
            printf("\t\n******assining values*******\n");
            printf("\n %d",a = 5);
            printf("\n %d",a += b);
            printf("\n %d",a -= b);
            printf("\n %d",a *= b);
            printf("\n %d",a /= b);
            printf("\n %d",a &= b);
            printf("\n %d",a |= b);
            printf("\n %d",a ^= b);
            printf("\n %d",a >>= b);
            printf("\n %d",a <<= b);



        }


