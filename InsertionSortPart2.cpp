#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << endl;
}

int main () {
    int num;
    std::cin >> num;
    vector<int> arr(num);

    for (int i = 0; i < num; i++) {
        std::cin >> arr[i];
    }

    for (int i = 1; i < num; i++) {
        if (arr[i - 1] > arr[i]) {
            int temp = arr[i];
            int j = i - 1;
            
            while (temp < arr[j] && j >= 0) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
        printArray(arr);
    }
}