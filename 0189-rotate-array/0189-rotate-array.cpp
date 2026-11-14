class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp;
        int d=k%nums.size();
        int n=nums.size()-d;
        for(int i=0;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int i=n;i<nums.size();i++){
            nums[i-n]=nums[i];
        }
        for(int i=0;i<temp.size();i++){
            nums[i+d]=temp[i];
        }
    }
};