#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int r=n; r!=0; r--)
    {
        for(int c=1; c<=r; c++)
        {
            cout<<"*\t";
        }
        cout<<endl;
    }
    return 0;
    
}
