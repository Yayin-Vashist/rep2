#include<iostream>
using namespace std;

int main(){
    int size, sum=0, sum0=0;
    cin>>size;
    int arr[size];
    for(int i = 0; i <size;i++){
        cin>>arr[i], sum += arr[i]; 
        if(arr[i]==0) sum0+=1;
    }
    int sum1=0, sum2=0, sum3=0, count1=1, count2=1, index1=0, index2=0;
    bool possible=true;
    if(size<3) possible=false;
    // else if (sum0==size) cout<<(((size-1)*(size-2))/2);
    else if (sum%3!=0) possible=false;
    else 
        for(int i = 0; i < size; i++){
            if (sum1!=(sum/3))
            {
                if (sum1<(sum/3)) sum1+=arr[i], index1++, index2++;
                else possible=false;
            }
            else
            {
                if((sum1==0)&&(i==0));
                else if ((sum1+arr[i]==sum1)&&(index1==i)) count1++, index1++;
                if (sum2!=(sum/3))
                {
                    if (sum2<(sum/3)) sum2+=arr[i], index2++;
                    else possible=false;
                }
                else
                {
                    if ((sum2+arr[i]==sum2)&&(index2==i)&&(i!=(size-1)&&(i!=0))) count2++;
                    if (sum3==0) sum3+=arr[i];
                    else break;                    
                }
            }
            
        }
        cout<<count1<<" "<<count2<<endl;
        if (!possible) cout<<0;
        else if((size>=3)&&(sum0==size))cout << (count1*count2);
        
    return 0;
}