void solve(){
    string s;
    cin>>s;
    set<int>v;
    for(auto i:s){
        v.insert(i);
    }
    if(sz(v)==1){
        cout<<-1<<ENDL;
        return;
    }
    bool o = 1;
    fore(i,0,sz(s)/2){
        if(s[i]!=s[sz(s)-i-1]){
            o = 0;
        }
        }
        if(o){
            cout<<sz(s)-1<<ENDL;
        }
        else{
            cout<<sz(s)<<ENDL;
    }
}

int main(){_
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
