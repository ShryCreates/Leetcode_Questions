class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_pro=nums[0];
        int min_pro=nums[0];
        int ans=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(max_pro,min_pro);
            }
            max_pro=max(nums[i],nums[i]*max_pro);
            min_pro=min(nums[i],nums[i]*min_pro);
            ans=max(ans,max_pro);
        }
        return ans;
    }
};
