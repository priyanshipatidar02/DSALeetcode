#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
  int subarraySum(vector<int> &nums, int k) {
    unordered_map<int, int> mpp;
    int sum = 0;
    int count = 0;

    mpp[0] = 1;

    for (int x : nums) {
      sum += x;
      if (mpp.count(sum - k)) {
        count += mpp[sum - k];
      }
      mpp[sum]++;
    }

    return count;
  }
};