class Solution {
public:
    
    int jump(vector<int>& nums) {
        int totalJumps=0;
        //destination is last index;
        int destination=nums.size()-1;

        int coverage=0,lastJumpIdx=0;

        //Base case
        if(nums.size()==1) return 0;

        //Greedy stratedy : extend coverage as long as possible

        for(int i=0;i<nums.size();i++)
        {
            coverage=max(coverage,i+nums[i]);
            if(i==lastJumpIdx)
            {
                lastJumpIdx=coverage;
                totalJumps++;

                //check if we reached destination already

                if(coverage>=destination)
                {
                    return totalJumps;
                }
            }
        } 
        return totalJumps;
    }

}
;
//Recursive Approach TLE
// class Solution {
// public:
//     long long int solve(vector<int>& nums, int start) {
//         if(nums.size()==1) return 0;
//         if (start >= nums.size()-1) {
//             return 0;
//         }
//         long long int minJump = INT_MAX;
        
//         for (int j =  1; j <=  nums[start]; j++) {
//             minJump = min(minJump, 1 + solve(nums, j+start));
//         }
//         return minJump;
//     }
//     int jump(vector<int>& nums) {

//         int i = 0;
//         long long int ans=solve(nums, i);
//         if(ans>INT_MAX)
//         {
//             return 0;
//         }
//         else 
//         return ans;
//     }

// }
// ;