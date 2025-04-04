class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==0 || n==1){
            return n;
        }
        int el=nums[0];
        int count=1;
        int m=1;
        for(int i=1;i<n;i++){
            if(nums[i]==el){
                continue;
            }
            if(nums[i]==el+1){
                count++;
                el=nums[i];
                m=max(m,count);
            }
            else{
                el=nums[i];
                m=max(m,count);
                count=1;
            }
        }
        return m;
    }
};
// https://leetcode.com/problems/longest-consecutive-sequence/submissions/1596349868/
