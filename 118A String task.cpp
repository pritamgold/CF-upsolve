#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>> s;

    for(char c: s){
        if(c=='a' || c=='e'  || c=='i' || c=='o' || c=='u' || c=='Y'||
           c=='A' || c=='E'  || c=='I' || c=='O' || c=='U' || c=='y'){
            continue;
           }
        else{
            cout<< ".";
            cout<< (char)tolower(c);
        }
    }
    cout<< endl;
    return 0;
}
