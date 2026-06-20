#include <iostream>
using namespace std;

class Solution{
public:
    void accessChar(string s){
        for(int i=0; i<s.length(); i++){
            cout<< s[i]<< endl;
        }
    }
};

int main(){
    Solution obj;
    string str="Hello";
    obj.accessChar(str);
    return 0;
    
}