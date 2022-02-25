// Time limit exceeded check 2nd attempt & wrong
#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    int arr[size], sum=0, count=0;
    bool possible=true;
    for (int i = 0; i < size; i++) cin >> arr[i], sum += arr[i];
    if(sum%3!=0) possible=false;
    else
    for (int i = 0; i < size-2; i++){
        int sum1, sum2 = 0, sum3;
        sum1 += arr[i];
        for (int j = i+1; j < size-1; j++){
            sum3=0;
            sum2+=arr[j];
            for (int k = j+1; k < size; k++)sum3 += arr[k];
            
            if ((sum1==sum2)&&(sum3==sum1)) count++;
        }
    }
    if(!possible)cout<<0;
    else cout<<count<<endl;   
    return 0;
}