// #include <iostream>
// #include <vector>
// #include <ctime>
// #include <algorithm>
// using namespace std;

// // Функція для створення масиву
// void create(vector<int>& arr, int n) {
//     for (int i = 0; i < n; i++)
//         arr[i] = rand() % 100;
// }

// // Функція для виведення масиву на екран
// void print(const vector<int>& arr) {
//     for (int i : arr)
//         cout << i << " ";
//     cout << endl;
// }

// // Функція для обміну місцями максимального та мінімального елементів
// void swapMaxMin(vector<int>& arr) {
//     if (arr.empty()) return;

//     int maxIndex = 0, minIndex = 0;
//     for (int i = 1; i < arr.size(); i++) {
//         if (arr[i] > arr[maxIndex]) maxIndex = i;
//         if (arr[i] < arr[minIndex]) minIndex = i;
//     }
//     swap(arr[maxIndex], arr[minIndex]);
// }

// int main() {
//     srand(static_cast<unsigned int>(time(0)));

//     int n;
//     cout << "n = ? "; 
//     cin >> n;

//     vector<int> arr(n);
//     create(arr, n);
    
//     cout << "Original array: ";
//     print(arr);

//     swapMaxMin(arr);

//     cout << "Modified array: ";
//     print(arr);

//     return 0;
// }

//! 1 прикл
// #include <iostream>
// #include <array>
// #include <ctime>
// using namespace std;

// // Функція для створення масиву
// void create(array<int, 100>& arr, int n) {
//     for (int i = 0; i < n; i++)
//         arr[i] = rand() % 100;
// }

// // Функція для виведення масиву на екран
// void print(const array<int, 100>& arr, int n) {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// // Функція для обміну місцями максимального та мінімального елементів
// void swapMaxMin(array<int, 100>& arr, int n) {
//     if (n == 0) return;

//     int maxIndex = 0, minIndex = 0;
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > arr[maxIndex]) maxIndex = i;
//         if (arr[i] < arr[minIndex]) minIndex = i;
//     }
//     swap(arr[maxIndex], arr[minIndex]);
// }

// int main() {
//     srand(static_cast<unsigned int>(time(NULL)));

//     int n;
//     cout << "n = ? "; 
//     cin >> n;

//     array<int, 100> arr = { 0 };
//     create(arr, n);

//     cout << "Original array: ";
//     print(arr, n);

//     swapMaxMin(arr, n);

//     cout << "Modified array: ";
//     print(arr, n);

//     return 0;
// }


//! 2
#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;

int RandomNumber() { return (std::rand() % 100); }

// Функція для створення масиву
void create(vector<int>& arr, int n) {
    generate(arr.begin(), arr.end(), RandomNumber);
}

// Функція для виведення масиву на екран
void print(const vector<int>& arr) {
    for (int i : arr)
        cout << i << " ";
    cout << endl;
}

// Функція для обміну місцями максимального та мінімального елементів
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

