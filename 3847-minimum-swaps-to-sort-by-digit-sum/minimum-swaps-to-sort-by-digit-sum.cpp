
class Solution {
public:
    int digitSum(int n) {
        int sum = 0;

        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }

        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<pair<int,int>,int>> v;

        for(int i = 0; i < n; i++) {
            int sum = digitSum(nums[i]);
            v.push_back({{sum, nums[i]}, i});
        }

        sort(v.begin(), v.end());

        vector<int> vis(n, 0);
        int swaps = 0;

        for(int i = 0; i < n; i++) {
            if(vis[i] || v[i].second == i)
                continue;

            int j = i;
            int cnt = 0;

            while(!vis[j]) {
                vis[j] = 1;
                j = v[j].second;
                cnt++;
            }

            swaps += cnt - 1;
        }

        return swaps;
    }
};
