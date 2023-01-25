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
            if(c==mr || r==mr ||(c==n && r<mr) )
                cout<<"*\t";
            else if((r==1 && c<mr)|| (c==n && r<mr))
                cout<<"*\t";
            else if((c==1 && r>mr) || (r==n && c>mr))
                cout<<"*\t";
            else
                cout<<"\t";
        }
        cout<<endl;   
    }
    return 0;
}
