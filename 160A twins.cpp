#include<bits/stdc++.h>
using namespace std;

bool f(int x, int y)
{
    return x>y;
}
int main()
{
    int n,Sum1=0,Sum2=0,ans; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        Sum1+= a[i];
    }
    sort(a.begin(),a.end(),f);
    for(int i=0; i<n; i++){
        Sum2+=a[i];
        if(Sum2>Sum1/2){
            ans=i+1;
            break;
        }
        ans=i+1;
    }
    cout<< ans << endl;
    return 0;
}
