#include <iostream>
using namespace std;

class Solution {
public:
    void pattern(int n) {
        for(int i=0; i<n; i++){
            for(int j=n; j>i; j--){
                cout<<"*";
            }
            cout<<endl;
        }

    }
};


int main(){
    Solution obj;
    obj.pattern(4);
}