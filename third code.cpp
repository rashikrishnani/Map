class Solution {
public:
    int firstUniqChar(string s) {
        vector <int> arr(256,0);
        for(int i=0;i<s.size();i++){
            int c=s[i];
            arr[c]++;
        }
        for(int i=0;i<s.size();i++){
           int k=s[i];
           if(arr[k]==1){
             return i;
           }
        }
        return -1;
    }
};
// https://leetcode.com/problems/first-unique-character-in-a-string/submissions/1596352437/
