#include<iostream>
using namespace std;

int main(){
    int kirito_strength, num_of_dragons;
    cin>>kirito_strength>>num_of_dragons;
    int strength_and_bonus_upon_winning[num_of_dragons][2];
    for (int i = 0; i < num_of_dragons; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>strength_and_bonus_upon_winning[i][j];
        }
    }
    for (int i = 0; i < num_of_dragons; i++)
    {
        for (int j=0 ; j < (num_of_dragons-1); j++)
        {
            if (strength_and_bonus_upon_winning[j][0]>strength_and_bonus_upon_winning[j+1][0])
            {
                strength_and_bonus_upon_winning[j][0]=strength_and_bonus_upon_winning[j][0]+strength_and_bonus_upon_winning[j+1][0];
                strength_and_bonus_upon_winning[j+1][0]=strength_and_bonus_upon_winning[j][0]-strength_and_bonus_upon_winning[j+1][0];
                strength_and_bonus_upon_winning[j][0]=strength_and_bonus_upon_winning[j][0]-strength_and_bonus_upon_winning[j+1][0];

                strength_and_bonus_upon_winning[j][1]=strength_and_bonus_upon_winning[j][1]+strength_and_bonus_upon_winning[j+1][1];
                strength_and_bonus_upon_winning[j+1][1]=strength_and_bonus_upon_winning[j][1]-strength_and_bonus_upon_winning[j+1][1];
                strength_and_bonus_upon_winning[j][1]=strength_and_bonus_upon_winning[j][1]-strength_and_bonus_upon_winning[j+1][1];
            }
        }
    }
    // for (int i = 0; i < num_of_dragons; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout<<strength_and_bonus_upon_winning[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    int win=1;
    for (int i = 0; i < num_of_dragons; i++)
    {
        if (kirito_strength>strength_and_bonus_upon_winning[i][0])
        {
            kirito_strength+=strength_and_bonus_upon_winning[i][1];
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}