#include <iostream>
using namespace std;

class Solution {
public:
    void PrintName(string name, int count, int n){
        if (count==n){
            return;
        }
        cout<<name<<"\n";
        PrintName(name, count+1, n);
    }
};

int main(){
    Solution obj;
    obj.PrintName("Vedant", 0, 10);
    return 0;
}