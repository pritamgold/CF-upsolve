#include<bits/stdc++.h>
using namespace std;

int main()
{
    int M,N; cin>> M >> N;
    int ans= (M/2)*N;
    M=M%2;
    if(M) ans += N/2;
    cout<< ans << endl;
    return 0;
}
