#include<stdio.h>
 
int main(){
    int num1, num2, temp;
    printf("Enter the numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("num1 = %d & num2 = %d\n", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping\nnum1 = %d & num2 = %d", num1, num2);
    return 0;
}