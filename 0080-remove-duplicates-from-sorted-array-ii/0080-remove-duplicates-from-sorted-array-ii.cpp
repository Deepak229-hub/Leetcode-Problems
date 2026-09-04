class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 1) return 1;

        int i = 1, j = 2;
        int res = 2;

        while (j < nums.size()) {
            if (nums[j] == nums[i - 1]) {
                j++;
                continue;
            }

            nums[i + 1] = nums[j];
            i++;
            j++;
            res++;
        }

        return res;
    }
};