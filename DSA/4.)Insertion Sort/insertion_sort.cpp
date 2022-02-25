#include<iostream>
using namespace std;

int insertionSort(int size, int arr[]);

int main(){
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) cin >> arr[i];
    
    insertionSort(size, arr);
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    
    return 0;
}

int insertionSort(int size, int arr[]){
    for (int i = 1; i < size; i++)
    {
        int j=i-1, temp=arr[i];
        while((temp<arr[j])&&(j>=0)){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    return 0;
}