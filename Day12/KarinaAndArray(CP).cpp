// B. Karina and Array
// Link:-https://codeforces.com/problemset/problem/1822/B
#include <bits/stdc++.h>

using namespace std;
void solve()
{
    long long n;
    cin>>n;
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<max(arr[0]*arr[1],arr[n-1]*arr[n-2])<<endl;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }

    return 0;
}
