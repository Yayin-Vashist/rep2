// Success
#include<iostream>
using namespace std;

int binary_search(int size, int arr[], int target_element);

int main(){

    int size, target_element;
    cout<<"Give the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Give the array elements: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Please give the element to find: ";
    cin>>target_element;
    binary_search(size, arr, target_element);
    return 0;
}

int binary_search(int size, int arr[], int target_element){

    int start =0, end=size-1;
    while (start<=end)
    {
        int middle_element=(start+((end-start)/2));
        if (arr[middle_element]==target_element)
        {
            cout<<"The element "<<target_element<<" exists at "<<(middle_element+1)<<" index in the array"<<endl;
            return 0;
        }
        if (arr[middle_element]>target_element)
        {
            end=(middle_element-1);
            continue;
        }
        if (arr[middle_element]<target_element)
        {
            start=(middle_element+1);
            continue;
        }
    }
    if (start>end)
    {
        cout<<"Element not found";
        return 0;
    }
    return 0;
}