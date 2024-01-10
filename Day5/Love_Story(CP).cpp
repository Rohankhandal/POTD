#include<bits/stdc++.h>

using namespace std;



#define test     long long T;cin>>T;while(T--)

#define all(x) (x).begin(), (x).end()



void solve(){

    string n; cin>>n;

    string m = "codeforces";



    int ans=0;

    for(int i=0;i<m.size();i++){

        if(n[i]!=m[i]) ans++;

    }

    cout<<ans<<endl;

}



int main() {

    test

    //(if you want to take the more test cases you may uncomment it out)

    solve();

}