#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int rem;
    for(int i=2; i<n; i++)
    {
        while(n%i==0)
        {
            rem=n%i;
            n=n/i;
            cout<<i<<" ";
        }
    }
    cout<<n;
    return 0;
}

