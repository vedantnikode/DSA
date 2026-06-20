#include <iostream>
using namespace std;

class Solution {
public:
    void pattern(int n) {
        for(int i=0; i<n; i++){
            for(char ch='A'; ch<='A'+i; ch++){
                cout<<ch;
                
                
            }
            cout<<endl;
        }

    }
};


int main(){
    Solution obj;
    obj.pattern(5);
}