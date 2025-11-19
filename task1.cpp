#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums[0];

        int prev2 = nums[0];             
        int prev1 = max(nums[0], nums[1]); 

        for(int i = 2; i < n; i++) {
            int pick = nums[i] + prev2;  // rob the current house
            int skip = prev1;            // skip this house 
            int curr = max(pick, skip);

            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};

int main() {
    vector<int> nums = {2, 7, 9, 3, 1};
    Solution s;
    cout << s.rob(nums) << endl;
    return 0;
}
