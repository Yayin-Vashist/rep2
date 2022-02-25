#include<stdio.h>
 
int main(){
    for (int i = 0; i < 5; i++)// for different rows
    {
        for (int j = 0; j <= i; j++)// for different columns
            printf("%d ", i+1);
        printf("\n"); //for new line after each row
    }
    
    return 0;
}