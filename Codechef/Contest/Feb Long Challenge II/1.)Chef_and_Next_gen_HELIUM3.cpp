#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int units_needed, UN_for_years, units_made, UM_for_years;

        cin >> units_needed>>UN_for_years>>units_made>>UM_for_years;

        if ((units_made*UM_for_years)>=(units_needed*UN_for_years))
        {
            cout <<"YES"<<endl;
        }
        else
        {
            cout <<"NO"<<endl;
        }
        
    }
    return 0;
}