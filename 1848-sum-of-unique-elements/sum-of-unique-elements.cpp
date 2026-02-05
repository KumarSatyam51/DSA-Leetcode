class Solution {
public:
    int sumOfUnique(std::vector<int>& nums) {
        std::unordered_map<int, int> counts;

        for (int num : nums) {
            counts[num]++;
        }

        int total_sum = 0;

        for (auto const& [num, count] : counts) {
            if (count == 1) {
                total_sum += num;
            }
        }

        return total_sum;
    }
};