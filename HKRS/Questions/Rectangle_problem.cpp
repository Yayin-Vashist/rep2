#include<iostream>
using namespace std;

int main(){
            int size_of_sticks[3];
        for(int i=0;i<3;i++){
            cin>>size_of_sticks[i];
        }
        bool Rectangle_problem=false;
        if((size_of_sticks[0]==size_of_sticks[1])&&(size_of_sticks[2]%2==0)){
            Rectangle_problem=true;
        }
        if((size_of_sticks[2]==size_of_sticks[1])&&(size_of_sticks[0]%2==0)){
            Rectangle_problem=true;
        }
        if((size_of_sticks[0]==size_of_sticks[2])&&(size_of_sticks[1]%2==0)){
            Rectangle_problem=true;
        }
        if(Rectangle_problem) cout<<"Yes";
        else                                  cout<<"No";
    return 0;
}