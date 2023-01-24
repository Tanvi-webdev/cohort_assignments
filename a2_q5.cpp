#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int r=1;r<=n; r++)
    {
        int cl=(n-1)/2;
        int mr=(n+1)/2;
        for(int j=1; (r<=mr? j<=cl+r: j<=cl+r-2*(r-mr)); j++)  
        {
            if(j<=(cl+1-r) && r<=mr)
                cout<<"\t";
            else if (j<=r-cl-1 && r>mr){
                cout<<"\t";
            }
            else
                cout<<"*\t";
        }
        cout<<endl;
    }
    return 0;
}
