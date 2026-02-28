class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(vector<int>& c,int target,int start,vector<int>& temp){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<c.size();i++){
            if(c[i]>target)
            continue;
            temp.push_back(c[i]);
            backtrack(c,target-c[i],i,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        backtrack(candidates,target,0,temp);
        return ans;
    }
};
