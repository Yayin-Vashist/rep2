// Work in progress
#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];
    int sum = 0, num0=0;
    for (int i = 0; i < size; i++){
        cin>>arr[i];
        sum += arr[i];
        if (arr[i]==0) num0++;
    }
    bool possible=true, haah=true;
    int count=0;
    if ((sum%3!=0)||(size<3))
    {
        possible=false;
        // cout<<"hi1";
    }
    else if(num0==size) haah=false;
    else{
        int sum1=0, sum2=0, sum3=0, index1=0, index2=1, index3=2;
        for (int i = 0; i < size; i++)
        {
            if (sum1!=(sum/3))
            {
                if (sum1<sum/3)
                {
                    sum1+=arr[i];
                    // if (sum1==(sum/3))
                    // {
                    //     count++;
                    //     cout<<"SUM 1 "<<i<<endl;
                    // }
                    index1++;
                    index2++;
                    index3++;
                }
                else 
                {   
                    // cout<<"hi2";
                    possible=false;
                    break;
                }
            }
            else
            {
                if ((sum1+arr[i]==sum1)&&(index1==i))
                {
                    count++;
                    index1++;
                    // cout<<"SUM 1 "<<i<<endl;
                }
                // 
                if (sum2!=(sum/3))
                {
                    if (sum2<sum/3)
                    {
                        sum2+=arr[i];
                        if (sum2==(sum/3))
                        {
                            count++;
                            // cout<<"SUM 2 "<<i<<endl;
                        }
                        index2++;
                        index3++;
                    }
                    else 
                    {   
                        // cout<<"hi3";
                        possible=false;
                        break;
                    }
                }
                else
                {
                    // cout<<index2<<" "<<i<<endl;
                    if ((sum2+arr[i]==sum2)&&(index2==(i+1))&&(i>0))
                    {
                        count++;
                        index2++;
                        // cout<<"SUM 2 "<<i<<endl;
                    }
                    //
                    if (sum3!=(sum/3))
                    {
                        if (sum3<sum/3)
                        {
                            sum3+=arr[i];
                            // if (sum3==(sum/3))
                            // {
                            //     count++;
                            //     cout<<"SUM 3 "<<i<<endl;
                            // }
                            index3++;
                        }
                        else 
                        {   
                            // cout<<"hi4";
                            possible=false;
                            break;
                        }
                    }
                    else
                    {
                        if ((sum3+arr[i]==sum3)&&(index3==(i+2))&&(i>1))
                        {
                            count++;
                            index3++;
                            // cout<<"SUM 3 "<<i<<endl;

                        }
                        
                    }
                    //    
                }
                 
            }
        }
    }
    if (!possible)
    {
        cout << "0";
    }
    else
    {
        if (!haah)
        {
            cout<<(((size-1)*(size-2))/2);
        }
        else
        cout << count;
    }
    
    return 0;
}