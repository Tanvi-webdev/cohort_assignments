#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int nCr;
    
    int i, j, k;
    for(int r=0; r<n; r++)
    {
        for(int c=0; c<=r; c++)
        {
            int facti=1,factj=1,factk=1;
            int num;
            for(i=2; i<=r; i++){
                facti*=i;
            }
            for(int j=2; j<=c; j++){
                factj*=j;
            }
            for(int k=2; k<=(r-c); k++){
                factk*=k;
            }
            num=facti/(factj*factk);
            cout<<num<<"\t";                                    
        }
        cout<<endl;
    }
    return 0;
}
