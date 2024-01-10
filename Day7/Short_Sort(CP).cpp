/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
