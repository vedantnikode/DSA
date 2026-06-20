#include <iostream>
using namespace std;

class Solution{
public:
    int fibonacci(int n){
        if (n==0) return 0;
        if (n==1) return 1;
        // fibonacci(n-1);
        return fibonacci(n-1)+fibonacci(n-2);
    }
};

int main(){
    Solution obj;
    int a=5;
    for (int i=0; i<=a; i++){
        cout<<obj.fibonacci(i)<<" ";

    }
    return 0;
}