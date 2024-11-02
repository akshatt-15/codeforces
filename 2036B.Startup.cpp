#include<bits/stdc++.h>
using namespace std;

long long maxEarnings(int n, int k, const vector<pair<int, int>>& bottles) {
    unordered_map<int, vector<int>> brandToCosts;
    for (const auto& bottle : bottles) {
        int brand = bottle.first;
        int cost = bottle.second;
        brandToCosts[brand].push_back(cost);
    }

    vector<long long> maxBrandEarnings;
    for (auto& entry : brandToCosts) {
        auto& costs = entry.second;
        sort(costs.rbegin(), costs.rend());

        long long cumulativeSum = 0;
        for (int i = 0; i < costs.size(); ++i) {
            cumulativeSum += costs[i];
        }
        maxBrandEarnings.push_back(cumulativeSum);
    }

    sort(maxBrandEarnings.rbegin(), maxBrandEarnings.rend());

    long long maxTotalEarnings = 0;
    for (int i = 0; i < min(n, (int)maxBrandEarnings.size()); ++i) {
        maxTotalEarnings += maxBrandEarnings[i];
    }

    return maxTotalEarnings;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> bottles(k);
        for (int i = 0; i < k; ++i) {
            int b, c;
            cin >> b >> c;
            bottles[i] = {b, c};
        }

        cout << maxEarnings(n, k, bottles) << endl;
    }

    return 0;
}
