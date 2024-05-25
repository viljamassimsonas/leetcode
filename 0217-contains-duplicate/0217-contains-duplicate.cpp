#include <unordered_set>
#include <vector>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> hashset;

        for (const int& n : nums) {
            if (hashset.find(n) != hashset.end()) {
                return true;  // Duplicate found
            }
            hashset.insert(n);
        }
        return false;  // No duplicates found
    }
};
