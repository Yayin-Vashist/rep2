#include<iostream>
using namespace std;

int main(){
    int num_of_lanterns, length_of_street;
    cin >> num_of_lanterns >> length_of_street;
    int places_where_lantern_are_placed[num_of_lanterns];

    for (int i = 0; i <num_of_lanterns ; i++)
    {
        cin >> places_where_lantern_are_placed[i];
    }
    for (int i = 0; i < num_of_lanterns; i++)
    {
        int temp=num_of_lanterns-1;
        for (int j = 0; j < temp; j++)
        {
            if (places_where_lantern_are_placed[j]>places_where_lantern_are_placed[j+1])
            {
                places_where_lantern_are_placed[j]=places_where_lantern_are_placed[j]+places_where_lantern_are_placed[j+1];
                places_where_lantern_are_placed[j+1]=places_where_lantern_are_placed[j]-places_where_lantern_are_placed[j+1];
                places_where_lantern_are_placed[j]=places_where_lantern_are_placed[j]-places_where_lantern_are_placed[j+1];
            }
            
        }
        temp--;
    }
    
    double max_diff=places_where_lantern_are_placed[0];
    for (int i = 0; i < num_of_lanterns-1; i++)
    {
        if (max_diff<((double)((double)(places_where_lantern_are_placed[i+1]-places_where_lantern_are_placed[i])/2)))
        {
            max_diff=((double)((double)(places_where_lantern_are_placed[i+1]-places_where_lantern_are_placed[i])/2));
        }   
    }
    if (max_diff<(length_of_street-places_where_lantern_are_placed[num_of_lanterns-1]))
    {
        max_diff=(length_of_street-places_where_lantern_are_placed[num_of_lanterns-1]);
    }
    cout<<max_diff<<endl;
    return 0;
}