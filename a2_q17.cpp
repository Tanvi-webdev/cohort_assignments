#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int r=1; r<=n; r++)
    {
        int mr=(n+1)/2;         
        for(int c=1; c<=n; c++)
        {
           if(r<mr && (c>mr-1+r   
               || c<mr)){
               cout<<"\t"; 
            }
            else if (r>mr && (c<mr 
               || c>n-(r-mr))){
                cout<<"\t";
            }
            else
               cout<<"*\t";
        }
        cout<<endl;
    }
    return 0;
}
