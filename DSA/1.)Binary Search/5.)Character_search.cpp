#include<iostream>
using namespace std;
int binary_search(int size, char arr[], char target_element);

int main(){
    int size;
    cout << "Give the size of the array: ";
    cin >> size;
    char arr[size], character;
    cout << "Give the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Give the number who's ceiling is to be found in the array: ";
    cin >> character;
    binary_search(size, arr, character);

    return 0;
}

int binary_search(int size, char arr[], char target_element){

    int start=0, end=size-1;
    while (start<=end)
    {
        int middle_element=(start+((end-start)/2));
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
    if (target_element<arr[start])
    {
        cout<<"The element required is "<<arr[start]<<" which exists at index "<<(start+1)<<" in the array"<<endl;
        return 0;
    }
    else
    {
        cout<<"The element required is "<<arr[0]<<" which exists at index "<<1<<" in the array"<<endl;
        return 0;
    }
    
    return 0;
}