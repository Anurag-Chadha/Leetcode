class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string ans="";
        for(int i=0;i<min(strs[0].length(),strs[n-1].length());i++){
            if(strs[0][i]==strs[n-1][i]){
                ans+=strs[0][i];
            }else{
                break;
            }
        }
        return ans;
    }
};
