#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    for(int r=n; r!=0; r--)
    {
        for(int c=1; c<=r; c++)
        {
            if(c==r)
               cout<<"*\t";
            else
               cout<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
