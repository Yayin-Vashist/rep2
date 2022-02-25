#include<iostream>
using namespace std;

int main(){
    int row, column, target_element;
    cout<<"Please give the number of rows and column in the matrix: ";
    cin>>row>>column;
    int matrix[row][column];
    cout<<"Please give the elements of the matrix: "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>matrix[i][j];
        }    
    }
    cout<<"Please give the element to find";
    cin>>target_element;
    binary_search(target_element, matrix);
    return 0;
}

int binary_search(int target_element,int* arr){

    int start,end;
    while (start>=end)
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