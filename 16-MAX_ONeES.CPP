// SIMPLE H AGAR 1 AYA TOH COUNTER STARTING FROM AND++ OF ANY OTHER THAN 1 CNT==0 THEN ANS=MAX(CNT)
#include <iostream>

#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = 0;

        for (int x : nums) {
            if (x == 1) {
                count++;
                maxi = max(maxi, count);
            } else {
                count = 0;
            }
        }

        return maxi;
    }
};

int main() {
    vector<int> nums = {10, 1, 0, 1, 1, 1};

    Solution s;
    cout << s.findMaxConsecutiveOnes(nums);

    return 0;
}
