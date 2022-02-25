#include<iostream>
using namespace std;

int main(){
    int i=1;
    while (+(+i--)!=0)
    i-=i++;
    cout <<i;
    return 0;
}