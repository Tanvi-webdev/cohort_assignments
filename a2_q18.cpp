#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int r=1; r<=n; r++){
        int mr=(n+1)/2;
        for(int c=1; c<=n; c++)
        {
            if(r==1 || r==n){
                cout<<"*\t";
            }   
            else if(c==r || (r+c)==n+1){
                cout<<"*\t";
            }    
            else if(r>mr && ((r+c)>=n+1) && c<r){
                cout<<"*\t";
            }  
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    return 0;
}
