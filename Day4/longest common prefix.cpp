class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string ans="";
       sort(strs.begin(),strs.end());
       string first=strs[0];
       string last=strs[strs.size()-1];
       for(int i=0;i<first.size();i++)
       {
           if(first[i]!=last[i])
            break;
            ans.push_back(first[i]);
       }
        return ans;
    }
};

//Other method
// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         if (strs.empty()) return "";
//         string prefix = strs[0];
//         for (string s : strs)
//             while (s.find(prefix) != 0)
//                 prefix = prefix.substr(0, prefix.length() - 1);
//         return prefix;
//     }
// };