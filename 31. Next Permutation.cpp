class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int x=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                x=i;
                break;
            }
        }
        if(x==-1) {
            reverse(nums.begin(),nums.end());
        }
        else{
            for(int i=n-1;i>=0;i--){
                if(nums[i]>nums[x]){
                    swap(nums[i],nums[x]);
                    break;
                }
            }
            reverse(nums.begin()+x+1,nums.end());
        }
        
    }
};
