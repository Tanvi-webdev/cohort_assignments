#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int d;
    int num=n;
    
    for(int i=0; num!=0; i++)
    {
        int d=num%10;
        cout<<d<<endl;
        num=num/10;
    }
    return 0;
}
