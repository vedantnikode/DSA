#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> moveZeroes(vector<int>& arr) {
        vector<int> temp(arr.size(), 0);

        int index = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != 0) {
                temp[index] = arr[i];
                index++;
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = temp[i];
        }

        return arr;
    }
};

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    Solution sol;
    vector<int> result = sol.moveZeroes(arr);

    cout << "Array after moving zeroes: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}