/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void minimize(int num)
{
    int temp=num;
    int min=10;
    int count=0;
    while(temp!=0)
    {
        count++;
        if(temp%10<min)
        {
            min=temp%10;
        }
        temp/=10;
    }
    if(count==2)
    {
        cout<<num%10<<endl;
    }
    else
    {
        cout<<min<<endl;
    }
}
int main()
{
    int n;
    
   cin>>n;
    while(n--)
    
    {
        int num;
        cin>>num;
        minimize(num);
    }
    return 0;
}
