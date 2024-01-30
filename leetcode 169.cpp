class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])
                count++;
            else count=0;
            if(count>=n)
                return nums[i];
        }   
        return nums[0];
    }
};