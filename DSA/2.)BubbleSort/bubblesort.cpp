#include<iostream>
using namespace std;

int bubblesort(int size, int arr[]);

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i <size;i++) cin >> arr[i];
    bubblesort(size, arr);

    for (int i = 0; i < size; i++)
    cout<<arr[i]<<" ";
    
    return 0;
}

int bubblesort(int size, int arr[]){
    for (int i = 0; i < size; i++)
    for(int j = 0; j < (size-1-i); j++)
    if (arr[j]>arr[j+1])
    arr[j] = arr[j]+arr[j+1],arr[j+1] = arr[j]-arr[j+1],arr[j] = arr[j]-arr[j+1];
    return 0;
}