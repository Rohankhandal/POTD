// Desorting
// LINK:-https://codeforces.com/problemset/problem/1853/A
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
   vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    //check arr is sorted or not
    
    for (int i = 0; i < n-1; i++) {
        if(arr[i]>arr[i+1])
        {
            cout<<"0\n";
            return;
        }
    }
    
    
   int ans=0;
   int miniDist=INT_MAX;
   for (int i = 0; i < n-1; i++) {
       miniDist=min(arr[i+1]-arr[i],miniDist);
   }
   ans=miniDist/2+1;
   cout<<ans<<endl;
   
    
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}
