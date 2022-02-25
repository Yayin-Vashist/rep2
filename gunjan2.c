#include<stdio.h>
int main()
{
    int i=10;
    do
    {
        i+=20;
        printf("%d is i after condition is not true\n",i);
        i++;
        
    }while(i<100);
    return 0;
}