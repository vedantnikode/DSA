#include <iostream>
using namespace std;

class Solution {
public:
    void pattern(int n) {
        for(int i=1; i<=n; i++){
            for(char ch='A'+n-i; ch<'A'+n; ch++){
                cout<<ch<<" ";
            }
            cout<<endl;
        }
            
    }

    
};


int main(){
    Solution obj;
    obj.pattern(4);
}