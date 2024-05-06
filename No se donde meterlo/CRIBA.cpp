#include<bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ENDL '\n'
#define f first 
#define s second 
#define fore(i,a,b) for(lli i=(a), ThxMK = (b); i<ThxMK;++i)
#define foren(i,a,b) for(lli i=(a), ThxMK = (b); i<=ThxMK;++i)
#define pb push_back
#define all(s) begin(s),end(s)
#define sz(s) int(s.size())
#define deb(x) cout<< #x ": " << (x) << ENDL;
typedef long long lli;
typedef long double ld;
typedef pair<lli,lli>ii;
typedef vector<lli>vi;

vector<lli>p;
void criba(lli n){
    vector<bool>c(n+1, true);
    c[0]=c[1]=false;
    for(lli i=2;(i)<=n;++i){
        if(c[i]){
            for(lli j=(i*2);j<=n;j+=i){
                c[j]=false;
            }
        }
    }
    foren(i,0,n){
        if(c[i]){
            p.pb(i);
        }
    }
}

void solve(){
    lli x; cin>>x;
    lli ans = 0;
    criba(1e6);
    fore(i,0,x){
        if(x==p[i]){
           ++ans; 
        }
    }
    if(ans!=0){
        cout<<"yes"<<ENDL;
    }
    else{
        cout<<"no"<<ENDL;
    }
}

int main(){_ 
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
