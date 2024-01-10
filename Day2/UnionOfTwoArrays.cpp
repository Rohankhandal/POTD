//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            s.insert(b[i]);
        }
        return s.size();
       
    }
};
//  // Create a boolean array to mark presence of elements
//     bool present[100001] = {false};

//     // Traverse array a and mark elements as present
//     for (int i = 0; i < n; i++) {
//         present[a[i]] = true;
//     }

//     // Traverse array b and mark elements as present
//     for (int i = 0; i < m; i++) {
//         present[b[i]] = true;
//     }

//     // Count the number of marked elements
//     int unionCount = 0;
//     for (int i = 0; i <= 100000; i++) {
//         if (present[i]) {
//             unionCount++;
//         }
//     }

//     return unionCount;

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends