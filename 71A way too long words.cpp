#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    while(n--){
        string s; cin>> s;
        if(s.size()<=10) cout<< s << endl;
        else{
            int r=s.size();
            cout<< s[0] << r-2 << s[r-1] << endl;
        }
    }

}
