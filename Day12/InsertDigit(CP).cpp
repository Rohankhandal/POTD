// Insert Digit:
// LINK:-https://codeforces.com/contest/1811/submission/241250147
#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n,d,i;
    cin>>n;
    cin>>d;
    string s="";
    cin>>s;
    string temp=to_string(d);
    for(i=0;i<n;i++)
    {
        if(s[i]<temp[0])
        {
            s.insert(i,temp);
            break;
        }
    }
    if(i==n)
    {
      s.insert(i,temp);
    }
    cout<<s<<endl;
}
int main()
{
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        solve();
    }

    return 0;
}
