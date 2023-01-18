#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        int flag=0;
        
        for(int m=2; m<n; m++)
        { 
            if(n%m==0)
            {
               flag=1;
               break;
            }
        }
        
        if(flag==1 || n==1){
            cout<<"not prime"<<endl;
        }
        else{
            cout<<"prime"<<endl;
        }
    }
    return 0;
}
