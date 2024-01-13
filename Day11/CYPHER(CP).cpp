// C. Cypher
// LINK:-https://codeforces.com/problemset/problem/1703/C

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        string str;
        cin>>str;
        for(int j=0;j<num;j++)
        {
            if(str[j]=='U')
            {
                if(arr[i]==0)
                {
                  arr[i]=9;
                }
                else
                {
                    arr[i]--;
                }
            }
            else if(str[j]=='D')
            {
                if(arr[i]==9)
                {
                    arr[i]=0;
                }
                else
                {
                    arr[i]++;
                }
            }
        }
        
    }
    for (int i = 0; i < n; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
   
    
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    solve();
}
