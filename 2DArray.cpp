#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<vector<int>> arr (6, vector<int>(6));
    vector<int> sum_list;
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            sum_list.push_back(arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1]
            + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2]);
        }
    }

    int max = sum_list[0];

    for (int i = 0; i < sum_list.size(); i++) {
        if (max < sum_list[i]) {
            max = sum_list[i];
        }
    }
    std::cout << max << endl;

    return 0;

}