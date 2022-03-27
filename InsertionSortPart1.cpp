#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << endl;
}

int main() {
    int num;
    std::cin >> num;
    vector<int> arr(num);

    for (int i = 0; i < num; i++) {
        std::cin >> arr[i];
    }
    int temp = arr[num - 1];
    int j = num - 2;
    
    while (temp < arr[j]) {
        arr[j + 1] = arr[j];
        printArray(arr);
        j--;
    }
    arr[j + 1] = temp;

    printArray(arr);

    return 0;
}