#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int arr[num], count_even=0, count_odd=0, index_even,index_odd;
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
        if (arr[i]%2==0)
        {
            count_even++;
            index_even=(i+1);
        }
        else
        {
            count_odd++;
            index_odd=(i+1);
        }
    }
    if (count_even==1)
    {
        cout<<index_even;
    }
    else
    {
        cout<<index_odd;
    }
    return 0;
}