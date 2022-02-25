#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    if(n<1001&&n>0)
    {
        while(n--)
        {
            int num,c0=0,c1=0;
            cin>>num;
            char x[num];
            cin>>x;
            for(int i=0; i<num; i++)
            {
                if(x[i]=='0') c0++;
                else if(x[i]=='1') c1++;
                else
                {
                    cout<<"Invalid input";
                    return 0;
                }
            }
            if(num%2==1||(num>0&&num<4)) cout<<"YES"<<endl;
            else if(c0%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}