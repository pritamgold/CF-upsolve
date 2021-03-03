#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0; cin>>n;
    int ar[5]={0,0,0,0,0};
    for(int i=0; i<n; i++){
        int k; cin>>k;
        ar[k]++;
    }

///-----total greedy-----///
    ans+=ar[4];
    if(ar[3]>ar[1]){
        ans+=ar[3];
        ar[1]=0;
    }
    else{
        ans+=ar[3];
        ar[1] -=ar[3];
    }
    ans+= ar[2]/2;
    ar[2] %=2;
    if(ar[2]>0){
        if(ar[1]<=2){
            ans++;
            ar[1]=0;
        }
        else{
            ans++;
            ar[1] -= 2;
        }
    }
    ans+=ceil(1.0*ar[1]/4);
    cout<< ans << endl;

    return 0;
}

