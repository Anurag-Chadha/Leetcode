class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int writePtr=0;
        
        for(int traversePtr=0;traversePtr<n;traversePtr++){
            if(nums[traversePtr]!=0){
                nums[writePtr]=nums[traversePtr];
                writePtr++;
            }
        }
        for(;writePtr<n;writePtr++){
            nums[writePtr]=0;
        }
    }
};
