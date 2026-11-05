class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int sum2=0;
        for(int i=1;i<=nums.size();i++){
            sum2+=i;
        }
        return sum2-sum;
    }
};