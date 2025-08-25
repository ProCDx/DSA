#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int target) {
        unordered_map<int, int> hashTable; // value → index

        for (int i = 0; i < (int)nums.size(); i++) {
            int complement = target - nums[i];

            // Single lookup with find()
            auto it = hashTable.find(complement);
            if (it != hashTable.end()) {
                // it->second is the stored index of complement
                return { it->second, i };
            }

            // Store current number with its index
            hashTable[nums[i]] = i;
        }

        return {}; // no solution found
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}