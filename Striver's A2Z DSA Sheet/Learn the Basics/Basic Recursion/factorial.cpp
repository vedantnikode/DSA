#include <iostream>
using namespace std;

class Solution{
public:
    int Factorial(int n){
        if(n==0 || n==1){
            return 1;
        }
        return n*Factorial(n-1);
    }
};

int main(){
    Solution obj;
    cout<<obj.Factorial(5);
}