#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& costinClass) {
        vector<int> dp(costinClass.size());
        dp[0] = costinClass[0];
        dp[1] = costinClass[1];
        for (int i = 2; i < costinClass.size(); i++) {
            dp[i] = min(dp[i - 1], dp[i - 2]) + costinClass[i];
        }
        return min(dp[costinClass.size() - 1], dp[costinClass.size() - 2]);
    }
};

int main() {
    int a[] = {1, 100, 1, 1, 1, 100, 100, 1, 1, 100, 1};
    vector<int> cost(a, a + sizeof(a) / sizeof(int));
    Solution solution;
    cout << solution.minCostClimbingStairs(cost) << endl;
}
