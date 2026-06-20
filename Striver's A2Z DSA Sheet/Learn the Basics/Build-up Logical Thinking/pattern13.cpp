#include <iostream>
using namespace std;

class Solution {
public:
    void pattern(int n) {
        int k=1;
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout<<k;
                k++;
                
            }
            cout<<endl;
        }

    }
};


int main(){
    Solution obj;
    obj.pattern(5);
}