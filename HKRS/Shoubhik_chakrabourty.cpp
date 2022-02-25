#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j<(i+1) ; j++)
        {
            int sum=0;

            for (int k = 0; k < (num-i); k++)
            {
                if (k!=(num-i-(j+1)))
                {
                    cout <<("1+");
                    sum+=1;
                }
                else
                {
                    if (k!=(num-i-1))
                    {
                        cout <<((num-sum)/(j+1))<<"+";
                    }
                    else
                    {
                        cout <<((num-sum)/(j+1));
                    }
                }

            }
            cout <<endl;
        }
        
    }
    
    return 0;
}