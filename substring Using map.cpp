#include<bits/stdc++.h>
#define ll long long
#define FASTIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s1,s2;
        map<char,bool> m;
        cin>>s1>>s2;
        for(ll i=0;i<s1.size();i++){
            m[s1[i]]=true;
        }
        int i,c=0;
        for(i=0;i<s2.size();i++){
            if(m[s2[i]]==true){
                c++;
            }
        }
        if(c){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}