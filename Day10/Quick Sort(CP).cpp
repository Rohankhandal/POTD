// Quick Sort:
// Link:-https://codeforces.com/problemset/problem/1768/B
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int &x:arr)  cin>>x;
        
        int num=1;
        int total=0;  //no. of elements which is not at sort place
        for (int i = 0; i < n; i++) {
            if(arr[i]==num)
            {
                num++;
            }
            else
            {
                total++;
            }
        }
        cout<<total/k+(total%k!=0)<<endl;
    }

    return 0;
}
