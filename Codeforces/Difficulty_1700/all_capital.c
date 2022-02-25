#include<stdio.h>
 
int main(){
    char str[100];
    printf("Enter the string: ");
    gets(str);
    for (int i = 0; str[i] != '\0' ; i++)
        if ((str[i]>=97)&&(str[i]<=122))
            str[i]-=32;
    printf("String after changes is \n %s", str);
    return 0;
}