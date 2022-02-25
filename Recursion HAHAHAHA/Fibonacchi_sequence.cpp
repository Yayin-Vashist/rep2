#include<iostream>
using namespace std;

int fib(int a){
    if (a==1||a==2)
    {
        return 1;
    }
    return (fib(a-2)+fib(a-1));
}

int main(){
    int number;
    cout<<"Which number in the fibonaachi sequence do you want to find: ";
    cin>>number;
    cout<<fib(number);
    return 0;
}