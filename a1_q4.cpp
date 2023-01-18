#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int low, high;
    cin >> low >> high; 

    for(int i=low; i<=high; i++)
    {
        int flag=0;
        
        for(int m=2; m <= sqrt(i); m++)
        { 
            if(i%m==0)
            {
               flag=1;
               break;
            }
        }
        if(flag==0 && i!=1)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
