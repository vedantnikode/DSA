#include <iostream>
using namespace std;

class Solution{
public:
    int Sum(int n){
        if(n==1){
            return 1;
        }
        return n+Sum(n-1);
    }
};

int main(){
    Solution obj;
    cout<<obj.Sum(4);
    return 0;
}