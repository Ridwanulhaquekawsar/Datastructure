#include<bits/stdc++.h>
using namespace std;
int t,n;

void do_this(){
    string vowel={'a','e','i','o','u'}; 
    queue<char>q; for(auto c : vowel){q.push(c);}
    
    cin>>t; string tmp;
    while(t--){
        cin>>n; tmp.clear();
        
        while(n--){
            tmp.push_back(q.front()); q.push(q.front());
            q.pop();
        }sort(tmp.begin(),tmp.end()); cout<<tmp<<'\n';

    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    do_this();
    return 0;
}
