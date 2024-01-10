class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
         
         int n=nums.size();   //dry run for more clear
         int result=0;
         unordered_map<int,int>mp;
         for(int &num:nums)
         {
             result+=mp[num];

             mp[num]++;
         }
         
         return result;
    }
};
//first method
// class Solution {
// public:
//     int numIdenticalPairs(vector<int>& nums) {
         
//          int n=nums.size();
//          unordered_map<int,int>mp;
//          for(int &num:nums)
//          {
//              mp[num]++;
//          }
//          int result=0;
//          for(auto &it:mp)
//          {
//              int count=it.second;
//              result+=(count+(count-1))/2;
//          }
//          return result;
//     }
// };