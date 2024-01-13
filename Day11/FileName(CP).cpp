// B. File Name|
// LINK:-https://codeforces.com/problemset/problem/978/B
// You can not just take the file and send it. When Polycarp trying to send a file in the social network "Codehorses", he encountered an unexpected problem. If the name of the file contains three or more "x" (lowercase Latin letters "x") in a row, the system considers that the file content does not correspond to the social network topic. In this case, the file is not sent and an error message is displayed.
// Determine the minimum number of characters to remove from the file name so after that the name does not contain "xxx" as a substring. Print 0 if the file name does not initially contain a forbidden substring "xxx".

// You can delete characters in arbitrary positions (not necessarily consecutive). If you delete a character, then the length of a string is reduced by 1
// . For example, if you delete the character in the position 2 from the string "exxxii", then the resulting string is "exxii".

// Input
// The first line contains integer n (3≤n≤100) — the length of the file name.
// The second line contains a string of length n consisting of lowercase Latin letters only — the file name.

// Output
// Print the minimum number of characters to remove from the file name so after that the name does not contain "xxx" as a substring. If initially the file name dost not contain a forbidden substring "xxx", print 0.

// Examples
// 1)input
// 6
// xxxiii
// output
// 1  

// 2)input
// 5
// xxoxx
// output
// 0 

// 3)input
// 10
// xxxxxxxxxx
// output
// 8  

#include <bits/stdc++.h>
using namespace std;
void solve()
{
   string str;
   cin>>str;
   int ans=0;
   
   string temp="xxx";
   int pos=str.find(temp);
   while(pos!=string::npos)
   {
       str.erase(pos,1);
       ans++;
       pos=str.find(temp);
   }
   cout<<ans;
    
}
int main()
{
    int num;
    cin>>num;
    solve();
}
