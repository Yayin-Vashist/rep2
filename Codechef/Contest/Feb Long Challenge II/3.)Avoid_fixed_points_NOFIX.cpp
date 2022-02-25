#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        int arr[num];
        for(int i = 0; i < num; i++){
            cin >> arr[i];
        }
        int k=1, operations_required=0;
        for (int i = 0; i < num; i++)
        {
            if (arr[i]==k)
            {
                operations_required++;
                k++;
            }
            k++;
        }
        cout <<operations_required<<endl;
    }
    return 0;
}