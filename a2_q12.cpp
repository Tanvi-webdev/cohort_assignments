#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int n1=0;
    int n2=1;
    int nextterm;
    for(int r=1; r<=n; r++){
        for(int c=1; c<=r; c++)
        {
            cout<<n1<<"\t";
            nextterm=n1+n2;
            n1=n2;
            n2=nextterm;
        }
        cout<<endl;
    }
    return 0;
}
