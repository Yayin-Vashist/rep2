#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j,k=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            if(a[i]==i+1){
                n=n+1;
                k=k+1;
                for(j=n-1; j>=i-1;j--){
                    a[j]=a[j-1];
                }
                a[i-1]=n+i;
            }
            
        }
        cout<<k<<endl;
    }
    return 0;
}