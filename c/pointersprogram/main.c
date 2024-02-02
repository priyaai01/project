#include<stdio.h>
int main()
{
    int firstno=4;
    int secondno=18;
    printf("The first value %d \n",firstno);
    printf("The first value address %d \n",&firstno);
    printf("-----\n");

    printf("The second value %d\n",secondno);
    printf("The second value address %d \n",&secondno);
    printf("-----\n");

    int *third=&firstno;
    printf("The third value %d \n",third);
    printf("The third value address %d \n",&third);
    printf("The pointer value %d \n",*third);
    printf("----\n");

    int **fourth=&third;
    printf("The fourth value %d \n",fourth);
    printf("The fourth value address %d \n",&fourth);
    printf("The pointer value %d \n",**fourth);
    printf("-----\n");

    int ***fifth=&fourth;
    printf("The fifth value %d \n",fifth);
    printf("The fifth value address %d \n",&fifth);
    printf("The pointer value %d \n",***fifth);
    printf("-----\n");

    int ****six=&fifth;
    printf("The six value %d \n",six);
    printf("The six value address %d \n",&six);
    printf("The pointer value %d \n",****six);
    printf("-----\n");



    return 0;
}
