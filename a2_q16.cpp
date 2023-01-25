#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int a;
    for(int r=1; r<=n; r++)
    {
        a=1;
        for(int c=1; c<=(2*n)-1; c++){
            if(c<=n && c<=r)
                cout<<c<<"\t";
            else if( c>n)
            {
                if(c>(2*n-1)-r)
                   cout<<n-a<<"\t";
                else
                   cout<<"\t";
                   
                a++;
            }
            else
               cout<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
