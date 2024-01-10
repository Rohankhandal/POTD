class Solution {
public:
    bool rotateString(string s, string goal) {
        int len1=s.size();
        int len2=goal.size();
        if(len1>len2 || len2>len1)
        {
            return false;
        }

        s=s+s;       //make a big string or append s in s.
        bool ans=s.find(goal)!=string::npos;


        return ans;
    }
};

//second method
// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         if (s.length() != goal.length()) {
//             return false; // If lengths are different, rotation is not possible
//         }

//         for (int i = 0; i < goal.length(); i++) {
//             bool rotationPossible = true;

//             for (int j = 0; j < s.length(); j++) {
//                 // Use modulo operator to handle rotation
//                 if (goal[(i + j) % goal.length()] != s[j]) {
//                     rotationPossible = false;
//                     break;
//                 }
//             }

//             if (rotationPossible) {
//                 return true;
//             }
//         }

//         return false;
//     }
// };