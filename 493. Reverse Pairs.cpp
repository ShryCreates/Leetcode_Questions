class Solution {
public:
    int Count(vector<int>&nums,int left,int mid,int right){
        int count=0;
        int j=mid+1;
        for(int i=left;i<=mid;i++){
            while(j<=right && (long long)nums[i]>2LL*nums[j]){
                j++;
            }
            count+=(j-(mid+1));
        }
        vector<int>temp;
        int i=left,k=mid+1;
        while(i<=mid && k<=right){
            if(nums[i]<=nums[k])
            temp.push_back(nums[i++]);
            else
            temp.push_back(nums[k++]);
        }
        while(i<=mid)
        temp.push_back(nums[i++]);
        while(k<=right)
        temp.push_back(nums[k++]);
        for(int p=left;p<=right;p++){
            nums[p]=temp[p-left];
        }
        return count;
    }
    int sort(vector<int>&nums,int left,int right){
        if(left>=right)
        return 0;
        int mid=left+(right-left)/2;
        int count=0;
        count+=sort(nums,left,mid);
        count+=sort(nums,mid+1,right);
        count+=Count(nums,left,mid,right);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        return sort(nums,0,nums.size()-1);
    }
};
