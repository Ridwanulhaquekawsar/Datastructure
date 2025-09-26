#include<bits/stdc++.h>
using namespace std;
int t,n,i;

void do_this(){
    map<int,int>fr;

    cin>>t; vector<int>arr;
    while(t--){
        cin>>n; arr.clear(); arr.resize(n); fr.clear();
        i=0; while(i<n){
            cin>>arr[i]; fr[arr[i]]++; i++;
        }

        if(fr.size()==1){cout<<"YES"<<'\n';}
        else if(fr.size()==2){
            if(n%2!=0){
                if(abs(fr.begin()->second-next(fr.begin())->second)==1){
                    cout<<"YES"<<'\n';
                }else{cout<<"NO"<<'\n';} continue;
            }

            if((fr.begin()->second==(n/2)) && (next(fr.begin())->second==(n/2))){
                cout<<"YES"<<'\n';
            }else{cout<<"NO"<<'\n';}

        }else{cout<<"NO"<<'\n';}

    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    do_this();
    return 0;
}
