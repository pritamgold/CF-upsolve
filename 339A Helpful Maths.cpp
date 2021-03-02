#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>> s;
    int n=s.size();
    int one=0,two=0,three=0;
    for(int i=0; i<n; i++){
      if(s[i]=='1') ++one;
      if(s[i]=='2') ++two;
      if(s[i]=='3') ++three;
    }
    for(int i=0; i<n; i++){
        if(i%2==1) cout<<"+";
        else if(one-->0) cout<< "1";
        else if(two-->0) cout<< "2";
        else if(three-->0) cout<< "3";
    }
    cout<< endl;
    return 0;
}
