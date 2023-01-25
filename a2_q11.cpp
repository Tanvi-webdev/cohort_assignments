#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i=1;
    for(int r=1; r<=n; r++)
    {
        for(int c=1; c<=r; c++)
        {
            cout<<i<<"\t";
            i++;
        }
        cout<<endl;
    }
    return 0;
}
