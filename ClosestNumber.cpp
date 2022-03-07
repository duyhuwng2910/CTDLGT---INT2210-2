#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num;
    std::cin >> num;
    vector<int> arr(num);

    for (int i = 0; i < num; i++) {
        std::cin >> arr[i];
    }

    std::sort(arr.begin(), arr.end());

    vector<int> range_list;

    for (int i = 0; i < num - 1; i++) {
        range_list.push_back(arr[i + 1] - arr[i]);
    }

    int min = range_list[0];

    for (int i = 0; i < range_list.size(); i++) {
        if (min > range_list[i]) {
            min = range_list[i];
        }
    }

    for  (int i = 0; i < num - 1; i++) {
        if (arr[i + 1] - arr[i] == min) {
            std::cout << arr[i] << " " << arr[i + 1] << " ";
        }
    }

    return 0;
}