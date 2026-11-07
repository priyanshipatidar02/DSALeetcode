class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>temp;
       for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            temp.push_back(nums[i]);
        }
       }
       vector<int>temp2;
       for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            temp2.push_back(nums[i]);
        }
       }
       int t1=0;
       int t2=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=temp[t1];
                t1++;
            }else{
                nums[i]=temp2[t2];
                t2++;
            }
       }
       return nums;
    }
};