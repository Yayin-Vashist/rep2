//  NOT ACCEPTED! WHY?
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
       {
        int num, fav_song_place, fav_song_length;
        cin>>num;
        int arr[num];
        for (int i = 0; i < num; i++)
        {
            cin>>arr[i];
        }
        cin>>fav_song_place;
        fav_song_length=arr[fav_song_place-1];
        for (int i = 0, j=1; i < num; i++)
        {
            for (j ; j < num; j++)
            {
                if (arr[j-1]>arr[j])
                {
                    arr[j-1]=arr[j-1]+arr[j];
                    arr[j]=arr[j-1]-arr[j];
                    arr[j-1]=arr[j-1]-arr[j];
                }
            }
            j=i+1;
        }
        for (int i = 0; i < num; i++)
        {
            // cout<<arr[i]<<" ";
            if (arr[i]==fav_song_length)
            {
                cout<<(i+1)<<endl;
                break;
            }
        }
        // cout<<endl;
    }
    return 0;
}