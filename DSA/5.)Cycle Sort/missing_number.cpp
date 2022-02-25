#include<iostream>
using namespace std;

int Cyclesort(int size, int arr[]){
    for (int i = 0; i < size; i++)
    {
        // cout<<(i+1)<<endl;
        for (int j = 0; (j < size-1)&&(arr[i]!=(i+1)); j++)
        {
            if (arr[i]==0) break;
            int temp=arr[i];
            arr[i]=arr[i]+arr[temp-1];
            arr[temp-1]=arr[i]-arr[temp-1];
            arr[i]=arr[i]-arr[temp-1];
            // for(int k=0; k<size; k++) cout<<arr[k]<<" ";
            // cout<<endl;
        }
    }
    return 1;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0; i < size; i++) cin>>arr[i];
    Cyclesort(size,arr);
    int k=0;
    for (int i = 0; (i<size); i++)
        if(arr[i]!=(i+1))
            k=(i+1);
    cout<<k<<endl;
    return 0;
}