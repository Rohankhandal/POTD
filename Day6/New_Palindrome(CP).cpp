#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve()
{
    string s;
    cin>>s;
    if(s.size()%2)
    {
        s.erase(s.begin()+s.size()/2);
        //remove middle character if string is odd
    }

    if(s!=string(s.size(),s[0]))   //create a string of size {s.size()} with s[0] character e.g if s.size()=4 and s[0]=a then new string is aaaa.
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

    return 0;
}
int  main()
{
    int testCase=1;
    cin>>testCase;
    while(testCase--)
    {
        solve();
    }
    return 0;
}