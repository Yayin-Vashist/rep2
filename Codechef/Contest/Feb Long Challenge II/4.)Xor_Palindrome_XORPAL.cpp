#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int size, num0=0, num1=0;
        cin >> size;
        char str[size];
        cin >> str;
        for(int i = 0; i < size; i++){
            if (str[i]=='0')
            {
                num0++;
            }
            else
            {
                num1++;
            }
        }
        if ((((size%2==0)&&((num0%2==0))||(num0==num1)))||(size%2==1))
        cout<<"YES"<<endl;
        
        else cout<<"NO"<<endl;
    }
    return 0;
}