#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++) {
      int count = mpp[nums[i]]++;
      if (count >= 1) {
        return true;
      }
    }
    return false;
  }
};