class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0;
        int maxSum=INT_MIN;
        int startIndex=-1,endIndex=-1;
        int start=0;
        for(int i=0;i<nums.size();i++){
            if(currSum<0){
                currSum=0;  
                start=i;
            }
            currSum+=nums[i];
            if(currSum>maxSum){
                maxSum=currSum;
                startIndex=start;
                endIndex=i;
            }   
        }
        return maxSum;
    }
};
