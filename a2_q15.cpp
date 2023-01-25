#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i;
    for(int r=1; r<=n; r++)
    {
        int mr=(n+1)/2;
        r<=mr?i=r:i=(n-r+1);
        for(int c=1; c<=n; c++)
        {
            if(r<=mr && c<=mr && c>=mr+1-r ){
               cout<<i<<"\t";
               i++;
            }
            else if(r<=mr && c>mr && c<=mr+r-1){
                i--;
                cout<<i-1<<"\t";
            }
            else if(r>mr && c>r-mr && c<=mr){
                  cout<<i<<"\t";
                  i++;
            }
            else if(r>mr && c>mr && c<=n-(r-mr)){
                   i--;
                   cout<<i-1<<"\t";
            }
            else
               cout<<"\t";
        }
        cout<<endl;
    }
    return 0;
}

    
