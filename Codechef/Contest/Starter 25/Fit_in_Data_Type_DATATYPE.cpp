#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int max_num, num;
        cin>>max_num>>num;
        if (num<=max_num)
        {
            cout<<num<<endl;
        }
        else
        {
            cout<<((num-max_num-1)%(max_num+1))<<endl;
        }
    }  
    return 0;
}