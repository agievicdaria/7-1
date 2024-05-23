#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;

int RandomNumber() { return (std::rand() % 100); }

void create(vector<int>& arr, int n) {
    generate(arr.begin(), arr.end(), RandomNumber);
}

void print(const vector<int>& arr) {
    for (int i : arr)
        cout << i << " ";
    cout << endl;
}

void swapMaxMin(vector<int>& arr) {
    if (arr.empty()) return;

    auto maxIt = max_element(arr.begin(), arr.end());
    auto minIt = min_element(arr.begin(), arr.end());
    iter_swap(maxIt, minIt);
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int n;
    cout << "n = ? "; 
    cin >> n;

    vector<int> arr(n);
    create(arr, n);

    cout << "Original array: ";
    print(arr);

    swapMaxMin(arr);

    cout << "Modified array: ";
    print(arr);

    return 0;
}

