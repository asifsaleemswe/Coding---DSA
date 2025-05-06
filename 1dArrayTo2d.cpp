#include <iostream>
using namespace std;
// int firstDig(vector<int> num, int row){
//     for (int i = 0; i < row; i++)
//     {
//         int first = num[i];
//         return first;
//     }
// }
// int secDig(vector<int> num, int col, int half){
//     for (int i = 0; i < col; i++)
//     {
//         int sec = num[half+i];
//         return sec;
//     }
// }

int main() {
    vector<int> original = {1, 2, 3, 4};
    int row = 2, col = 2;

    vector<vector<int>> result;

    // Check if conversion is possible
    if (row * col != original.size()) {
        cout << "Not Possible";
    } else {
        for (int i = 0; i < row; i++) {
            vector<int> arr; // A new row
            for (int j = 0; j < col; j++) {
                arr.push_back(original[i * col + j]); // No need to cout here
            }
            result.push_back(arr);
        }
    }

    // Optional: Print the result
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

    