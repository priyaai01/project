#include<stdio.h>
int main()
{
     int q;
    printf("Enter the first value of");
    scanf("%d",&q);
    if (q>0)
    {
        printf(" %d is positive ",q);
    }
    else  if(q<0)
    {
        printf("%d is negative",q);
    }
    else
    {
       
    printf("%d is 0",q);
    }

    return 0;
}
  


