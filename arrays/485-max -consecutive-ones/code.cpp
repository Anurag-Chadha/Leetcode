class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int tempMax=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                tempMax++;
                maxi=max(maxi,tempMax);
            
            }
            else{
                tempMax=0;
            }
        }
        return maxi;
    }
};
