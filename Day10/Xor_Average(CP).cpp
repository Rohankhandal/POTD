

#include <bits/stdc++.h>
// PROBLEM:_XOR-AVERAGE
// LINK:-https://codeforces.com/problemset/problem/1758/B
using namespace std;
void solve()
{
    int num;
    cin>>num;
    //even case
    if(num%2==0)
    {
        cout<<"1 3 ";    //if num is even then xor of even number is 0 and avg is that number is itself , so we want 
        //a digit which give that number after xor , so xor of 1 and 3 is 2 
        for(int i=0;i<num-2;i++)
        {
            cout<<"2 ";
        }
        
    }
    else
    {
        for (int i = 0; i < num; i++) {   //xor of odd times a number ,then give that number itself , avg is also that 
        //number itself
            cout<<"1 ";
        }
    }
    cout<<endl;
    
}
int main()
{
    int tc=1;
    cin>>tc;
    while(tc--) solve();

    return 0;
}
