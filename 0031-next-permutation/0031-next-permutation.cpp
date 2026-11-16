class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k=-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(i>0&&nums[i-1]<nums[i]){
                k=i-1;
                break;
            }
        }
        if(k==-1){
            reverse(nums.begin(),nums.end());
        }else{
            for(int i=nums.size()-1;i>k;i--){
                if(nums[k]<nums[i]){
                    swap(nums[k],nums[i]);
                    break;
                }
            }
            reverse(nums.begin()+k+1,nums.end());
        }
    }
};