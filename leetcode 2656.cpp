class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum=nums[nums.size()-1];
        int ans=0;
        while(k>0){
            ans=ans+sum;
            sum++;
            k--;
        }
        return ans;
    }
};