#include<vector>
using namespace std;
class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int j = 0; // position for next non-zero

    // move all non-zero elements to the front
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != 0) {
        nums[j] = nums[i];
        j++;
      }
    }

    // fill the rest with zeroes
    while (j < nums.size()) {
      nums[j] = 0;
      j++;
    }
  }
};
