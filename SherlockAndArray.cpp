#include <iostream>
#include <vector>

using namespace std;

string balancedSum(vector<int> arr) {
    int sum = 0, temp = 0, median;
    
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }

    for (int i = 0; i < arr.size() - 1; i++) {
        temp += arr[i];
        median = arr[i + 1];
        if (median == (double) (sum - temp) / 2) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int query, num;
    std::cin >> query;

    for (int i = 0; i < query; i++) {
        std::cin >> num;
        vector<int> arr(num);

        for (int j = 0; j < num; j++) {
            std::cin >> arr[j];
        }
        std::cout << balancedSum(arr);
    }
}