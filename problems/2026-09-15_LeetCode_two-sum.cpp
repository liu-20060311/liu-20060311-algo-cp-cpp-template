// 示例：Two Sum (LeetCode 1)
// 文件名：problems/2026-09-15_LeetCode_two-sum.cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {2,7,11,15};
    int target = 9;
    unordered_map<int,int> mp; // value -> index
    for (int i = 0; i < (int)nums.size(); ++i) {
        int need = target - nums[i];
        if (mp.find(need) != mp.end()) {
            cout << mp[need] << " " << i << "\n"; // 输出索引
            return 0;
        }
        mp[nums[i]] = i;
    }
    return 0;
}
