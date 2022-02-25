#include<iostream>
using namespace std;

int main(){
    char str[1000];
    cin>>str;
    int count=0, i;
    for (i = 1; str[i]!='\0'; i++)
    {
        if ((65<=str[i])&&(str[i]<=90))
        {
            count++;
        }
    }
    if (count==(i-1))
        {
            for (int i = 0; i <= count; i++)
            {
                if ((65<=str[i])&&(str[i]<=90))
                {
                    str[i]+=32;
                    cout<<str[i];
                }
                else
                {
                    str[0]-=32;
                    cout<<str[i];
                }
            }
        }
    else
    {
        cout<<str;
    }
    return 0;
}