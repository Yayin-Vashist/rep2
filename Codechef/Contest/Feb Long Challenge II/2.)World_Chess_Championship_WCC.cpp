#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int Prize_money, carlsen_score=0, chef_score=0;
        cin>>Prize_money;
        Prize_money*=100;
        char results[14];
        cin >> results;
        for (int i = 0; i < 14; i++)
        {
            if (results[i] == 'C')
            {
                carlsen_score+=2;
                continue;
            }
            if (results[i] == 'N')
            {
                chef_score+=2;
                continue;
            }
            if (results[i] == 'D')
            {
                carlsen_score++;
                chef_score++;
                continue;
            }
        }
        if (carlsen_score >chef_score)
        {
            cout<<((3*Prize_money)/5)<<endl;
        }
        else if (carlsen_score==chef_score)
        {
            cout<<((11*Prize_money)/20)<<endl;
        }
        else if (carlsen_score<chef_score)
        {
            cout<<((2*Prize_money)/5)<<endl;
        }
    }
    
    return 0;
}