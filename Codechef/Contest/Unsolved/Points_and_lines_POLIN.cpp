#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int num_of_points;
        cin>>num_of_points;
        int coordinates[num_of_points][2];
        for (int i = 0; i < num_of_points; i++)
        {   
            cin>>coordinates[i][0]>>coordinates[i][1];
        }
        int num_line[num_of_points];
        for (int i = 0; i < num_of_points; i++)
        {
            num_line[i]=0;
        }
        
        for (int i = 0; i < num_of_points; i++)
        {
            int j, exception=0;
            for (j = i+1; j < num_of_points; j++)
            {
                if ((coordinates[i][0] == coordinates[j][0])&&(coordinates[i][1] == coordinates[j][1])&&(exception!=2))
                {
                    if (num_line[i]==0)
                    {
                        num_line[i]=0;
                        num_line[j]=2;
                        break;
                    }

                }
                else if (coordinates[i][0] == coordinates[j][0])
                {
                    num_line[i]=1;
                    num_line[j]=2;
                    for (int k = 0; k < num_of_points; k++)
                    {
                        if ((coordinates[i][1] == coordinates[k][1])&&(coordinates[i][0] != coordinates[k][0]))
                        {
                            exception=1;
                            for (int l = 0; l < num_of_points; l++)
                            {
                                if ((coordinates[k][0]==coordinates[l][0])&&(coordinates[j][1]==coordinates[l][1]))
                                {
                                    exception=2;
                                    num_line[i]=1;
                                    num_line[j]=1;
                                    num_line[k]=1;
                                    num_line[l]=1;
                                    break;
                                }
                            }
                            break;
                        }
                    }
                    continue;
                }
                else if((coordinates[i][1] == coordinates[j][1])&&(exception!=2))
                {
                        num_line[i]=1;
                        num_line[j]=2;
                        continue;
                }
                else if (num_line[i]==0)
                {
                    num_line[i]=2;
                }
            }
            if (((i+1)==num_of_points)&&(num_line[i]==0))
            {
            num_line[i]=2;
            }
        }
        // if (less_line<num_of_points)
        // {
        //     cout<<(2*(num_of_points)-num_of_points);
        // }
        // else
        // {
        //     cout<<(num_of_points+1);
        // }
        int total_line=0;
        for (int i = 0; i < num_of_points; i++)
       {
            total_line+=num_line[i];
            // cout<<num_line[i]<<" ";
        }
        cout<<total_line<<endl;
    }
    return 0;
}