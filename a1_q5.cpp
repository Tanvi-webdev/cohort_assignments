#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count=0;
    
    int num=n;
    
    for(int i=0; num!=0; i++)
    {
        num=num/10;
        count++;
    }
    cout<<count<<endl;

    return 0;
}
