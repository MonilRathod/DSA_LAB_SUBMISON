class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> num_map;
            for (int i = 0; i < nums.size(); ++i) {
                if (num_map.count(target - nums[i])) {
                    return {num_map[target - nums[i]], i};
                }
                num_map[nums[i]] = i;
            }
            return {};
        }
    };