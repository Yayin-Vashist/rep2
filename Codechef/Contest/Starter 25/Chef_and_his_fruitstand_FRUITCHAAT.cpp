#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int num_of_bananas,num_of_apple;
        cin>>num_of_bananas>>num_of_apple;
        if ((num_of_bananas/2)>num_of_apple)
        {
            cout<<num_of_apple<<endl;
        }
        else cout<<(num_of_bananas/2)<<endl;
    }
    return 0;
}