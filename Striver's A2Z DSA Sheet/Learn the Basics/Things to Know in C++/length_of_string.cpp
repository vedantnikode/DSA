#include <iostream>
#include <string>
using namespace std;

class Solution{
public:
    int findLength(string s){
        return s.length();
    }
};

int main(){
    Solution obj;
    string s = "Hello World";
    cout<< obj.findLength(s)<< endl;
    return 0;

}
