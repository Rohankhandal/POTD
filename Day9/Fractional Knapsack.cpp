//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
// Fractional Knapsack
// LINK:-https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1

class Solution
{
    public:
    static bool comp(Item a, Item b)   //sort according to max profit
    {
        double p1=(double)a.value/(double)a.weight;
        double p2=(double)b.value/(double)b.weight;
        return p1>p2;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        //sort according to maximum per unit weigth
         
        sort(arr,arr+n,comp);         //Tc:-Nlogn
        
        int currWeight=0;
        double finalValue=0;
        for(int i=0;i<n;i++)         //T.c :- N
        {
            if(currWeight+arr[i].weight<=W)
            {
                currWeight+=arr[i].weight;
                finalValue+=arr[i].value;
            }
            else
            {
                int remain=W-currWeight;
                finalValue+=(double)arr[i].value/(double)arr[i].weight*(double)remain;
                break;
            }
        }
        return finalValue;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(6)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends