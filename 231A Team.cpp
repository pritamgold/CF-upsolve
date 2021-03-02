#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,Count=0; cin>> n;
    while(n--)
    {
        int a,b,c; cin>>a >> b >> c;
        if(a+b+c >=2) ++Count;
    }
    cout<< Count << endl;
    return 0;
}
