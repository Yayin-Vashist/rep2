#include<iostream>
using namespace std;
int binary_search(int start, int end, int arr[], int target_element);

int main(){
    int size, num;
    cout << "Give the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Give the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Give the number who's ceiling is to be found in the array: ";
    cin >> num;
    binary_search(0, (size-1), arr, num);

    return 0;
}

int binary_search(int start, int end, int arr[], int target_element){

    while (start<=end)
    {
        int middle_element=(start+((end-start)/2));
        if (arr[middle_element]==target_element)
        {
            cout<<"The element required is "<<target_element<<" which exists at "<<(middle_element+1)<<" index in the array"<<endl;
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
        cout<<"The element required is "<<arr[start]<<" which exists at index "<<(start+1)<<" in the array"<<endl;
        return 0;
    }
    return 0;
}