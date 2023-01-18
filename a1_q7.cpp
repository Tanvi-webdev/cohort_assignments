#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    
    int d=0;
    int inverse=0;
    for(int p=1; n!=0; p++)
    {
      d=n%10;
      int exp=1;
      for(int j=1; j<=(d-1);j++)
      {
           exp=exp*10;
      }
      inverse=inverse+(exp*p);
      n=n/10;
    }
    cout<<inverse<<endl;
    return 0;
}
