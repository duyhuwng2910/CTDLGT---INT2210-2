#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num, k;
    std::cin >> num >> k;
    vector<int> arr(num);

    for (int i = 0; i < num; i++) {
        std::cin >> arr[i];
    }
    int count = 0;

    std::sort(arr.begin(), arr.end());

    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (k == (arr[j] - arr[i])) {
                count++;
            }
            if (k < arr[j] - arr[i]) {
                break;
            }
        }
    }
    std::cout << count << endl;

    return 0;
}