typedef long long ll;

class Solution {

    int BitCount(int x) {
        int ans = 0;
        for (int j = 29; j >= 0; j--) {
            if ((1 << j) & x)
                ans++;
        }
        return ans;
    }

public:
    long long countExcellentPairs(vector<int>& num, int k) {

        set<int> uniq(num.begin(), num.end());
        vector<int> bits;

        for (auto i : uniq) {
            int cnt = BitCount(i);
            bits.push_back(cnt);
        }

        sort(bits.begin(), bits.end());

        int n = bits.size();
        int l = 0, r = n - 1;
        ll result = 0;

        while (l < n && r >= 0) {
            if (bits[l] + bits[r] < k) {
                l++;
            } else {
                result += (n - l);
                r--;
            }
        }

        return result;
    }
};
