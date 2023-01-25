#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int r=1; r<=n; r++)
    {
        for(int c=1; c<=n; c++)
        {
            if(r==c || r+c==n+1)
                cout<<"*\t";
            else
                cout<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
