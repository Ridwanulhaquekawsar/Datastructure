#include<bits/stdc++.h>
using namespace std;
int t,n,cnt; string s;

void do_this(){
    cin>>t; list<char>lst; 
    
    while(t--){
        cin>>n>>s; lst.assign(s.begin(),s.end());

        cnt=0;
        while(!lst.empty()){
            auto it=lst.begin();

            while(it!=lst.end()){
                it=lst.erase(it); 
                if(it==lst.end()){break;} 
                else{it++;}
            }cnt++;
        }cout<<cnt<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    do_this();
    return 0;
}
