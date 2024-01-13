

#include <iostream>

using namespace std;
void solve()
{
    string s;
    cin>>s;
    string tar="abc";
    int flag=1;
    int first=0,second=0;
    for(int i=0;i<3;i++)
    {
        if(s[i]!=tar[i])
        {
            if(flag)
            {
                first=i;
                flag=0;
            }
            second=i;
            
        }
    }
    swap(s[first],s[second]);
    s==tar?(cout<<"YES"):(cout<<"NO");
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }

    return 0;
}
