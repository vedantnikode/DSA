#include <iostream>
using namespace std;

class Solution{
public:
    void Print(int i, int n){
        if(i>n){
            return;
        }
        cout<<i<<"  ";
        Print(i+1, n);
        

    }
};

int main(){
    Solution obj;
    obj.Print(1, 100);
    return 0;
}


// class Solution {
// public:
//     // Recursive function to print numbers from current to n using backtracking
//     void printNumbers(int current, int n) {
//         // Base case: if current exceeds n, stop recursion
//         if (current > n)
//             return;

//         // Recursive call with next number
//         printNumbers(current + 1, n);

//         // Print current number during backtracking
//         cout << current << " ";
//     }
// };

// int main() {
//     Solution sol;
//     int n = 10;

//     sol.printNumbers(1, n);
//     cout << "\n";

//     return 0;
// }