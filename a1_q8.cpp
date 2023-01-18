#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;

    int inv1=0, inv2=0;
    int r, count, num=n; 
    int d1=1, d2=1;

    for(count=0;num!=0; count++){
        num=num/10;
    }
    while(k<0){
        k=k+count;
    }
    while(k>count){
        k=k-count;
    }
    
    num=n;
    for(int i=1; num!=0; i++)
    {
        r=0;
        if(i<=k)
        {
            r=num%10;
            inv1=inv1+(d1*r);
            d1*=10;
        }
        else {
            r=num%10;
            inv2=inv2+(d2*r);
            d2*=10;
        }
        num=num/10;
    }
    cout<<(inv2+(inv1*d2))<<endl;
   
    return 0;
}


