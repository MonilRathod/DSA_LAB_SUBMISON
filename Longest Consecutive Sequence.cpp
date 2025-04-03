class Solution {
public:
     int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        int longest = 0;

        for (int num : num_set) {
            if (!num_set.count(num - 1)) {
                int current = num, streak = 1;
                while (num_set.count(current + 1)) {
                    current++;
                    streak++;
                }
                longest = max(longest, streak);
            }
        }
        return longest;
    }
};
