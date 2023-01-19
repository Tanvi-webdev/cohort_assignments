#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cin >> num1 >> num2;

    int n1=num1, n2=num2;
    int gcd , lcd;
    int rem;
     
    while(n1%n2)
    {
       
        rem=n1%n2;
        n1=n2;
        n2=rem;
        
        gcd=n2;
        lcd=(num1*num2)/gcd;
    }
    cout<<gcd<<endl;
    cout<<lcd<<endl;
    
    return 0;
}
