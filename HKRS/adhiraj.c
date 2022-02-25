#include<stdio.h>
int main()
{
    char str[1000];
    printf("Enter string\n");
    gets(str);
    int length;
    for (int i = 0; str[i]!='\0'; i++)
    {
        length=i;
    }
    printf("%d\n", length);
    // printf("Length  = %d\n",strlen(str));
    // str[strlen(str)]=' ';
    // printf("Length  = %d\n",strlen(str));
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     printf("%c",str[i]);
    // }
    return 0;
}