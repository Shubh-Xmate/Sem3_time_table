#include<iostream>
#include<vector>
using namespace std;
#define f(l,r) for(int i = l; i<r; i++)
#define f2(l2,r2) for(int i2 = l2; i2<r2; i2++)
#define f_(l,r) for (int i_ = l; i_>r; i_--)
#define f2_(l2, r2) for (int i2_ = l2; i2_>r2; i2_++)
#define elif else if
    
int main()
{
    int test ;
    cin>>test;
    while(test --)
    {
        int n;
        cin>>n;
        cout<<(n-1)/2<<endl;
    }
    return 0;
}