class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left=0;
        int cnt=0;
        int maxCnt=0;
        while(left<nums.size()){
            if(nums[left]==1){
                cnt++;
                left++;
            }
            maxCnt=max(maxCnt,cnt);
            if(left < nums.size() &&nums[left]==0){
                cnt=0;
                left++;
            }
        }
        return maxCnt;
    }
};