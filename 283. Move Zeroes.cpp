class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left_ptr=0;
        for(int right_ptr=0;right_ptr<nums.size();right_ptr++){
            if(nums[right_ptr]!=0){
                swap(nums[left_ptr],nums[right_ptr]);
                left_ptr++;
            }
        }
        return;
    }
};
