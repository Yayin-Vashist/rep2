#include<iostream>
using namespace std;

int main(){
    char str[1000];
    cin>>str;
    int null_point;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i+1]=='\0')
        {
            null_point=(i+1);
        }
    }
    // cout<<null_point;
    for (int i = 0; str[i]!='\0'; i++)
    {
        // cout<<i<<endl;
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='y'||str[i]=='Y')
        {
            // cout<<i<<endl;
            for (int j = i; str[j]!='\0'; j++)
            {
                // cout<<i<<' '<<j<<endl;
                str[j]=str[j+1];
            }
            i--;
            null_point--;
        }
        else
        {
            if ((65<=str[i])&&(str[i]<=90))
            {
                str[i]+=32;
            }
            int j;
            for ( j= i; str[j]!='\0'; j++)
            {}
            // cout<<i<<' '<<j<<endl;
            for ( j=j ;j>=i; j--)
            {
                str[j+1]=str[j];
            }
            str[i]='.';
            i++;
        }
    }
    cout<<str;   
    return 0;
}