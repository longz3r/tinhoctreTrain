// https://tinhoctre.vn/problem/tht2022b_mb_vongtay

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int count_ways = 0;

void count_sum_helper(vector<int>& nums, int target, int cur_sum, int n, int i) {
    if (i == nums.size()) {
        if (cur_sum == target && n == 0) {
            count_ways++;
        }
        return;
    }
    count_sum_helper(nums, target, cur_sum, n, i + 1);
    count_sum_helper(nums, target, cur_sum + nums[i], n - 1, i + 1);
}

int count_sum(vector<int>& nums, int target, int n) {
    count_ways = 0;
    count_sum_helper(nums, target, 0, n, 0);
    return count_ways;
}

int main() {
    int n, m, s;
    string line1, line2;
    vector<int> array;

    getline(cin, line1);
    istringstream iss1(line1);
    iss1 >> n >> m >> s;
    getline(cin, line2);
    istringstream iss2(line2);
    int num;
    while (iss2 >> num) {
        array.push_back(num);
    }

    int ways = count_sum(array, s, n);
    cout << ways;
}
