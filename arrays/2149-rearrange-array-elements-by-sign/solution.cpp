class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> ans(nums.size(),0);
        int posWrite=0,negWrite=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[posWrite]=nums[i];
                posWrite+=2;
            }else{
                ans[negWrite]=nums[i];
                negWrite+=2;
            }

        }
        return ans;
    }
};
