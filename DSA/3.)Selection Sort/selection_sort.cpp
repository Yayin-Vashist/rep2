#include<iostream>
using namespace std;

int selectionSort(int size, int arr[]);

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) cin>>arr[i];

    selectionSort(size, arr);
    for (int i = 0; i < size; i++) cout<<arr[i]<<" ";
    
    return 0;
}

int selectionSort(int size, int arr[]){
    int max=arr[0];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size-i; j++)
            if (max<arr[j]) max=j;
        arr[size-i-1]=arr[max]+arr[size-i-1],arr[max]=arr[size-i-1]-arr[max],arr[max]=arr[size-i-1]-arr[max];
    }
    return 0;
}