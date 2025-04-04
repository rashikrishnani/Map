class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {    
    int n,k=0,l=0;
    n=nums.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
    return {0};
    
    }
};
// https://leetcode.com/problems/two-sum/submissions/1596347381/
