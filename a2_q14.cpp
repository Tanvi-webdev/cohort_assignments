#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    int i;
    for(i=1; i<=10; i++)
    {
      cout<<n<<" * ";
      cout<<i<<" = "<<n*i<<endl;
    }
    return 0;
}
