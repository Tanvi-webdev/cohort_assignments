#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int r=1; r<=n; r++)
    {
        cout<<"*\t";
        int mr=((n+1)/2);
        for(int c=1; c<=n; c++)
        { 
            if(c>mr-r  && c<mr+r && r<=mr)
            {
                cout<<"\t";
            }
            else if(r>mr && c>r-mr  && c<=n-(r-mr))
            {
                cout<<"\t";
            }
            else
                cout<<"*\t";
        }
        cout<<"*\t"<<endl;
    }
    return 0;
}
