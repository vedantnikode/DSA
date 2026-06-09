#include <iostream>
using namespace std;

class Solution{
public:
    bool compareStrings(string str1, string str2){
        return str1==str2;
    }

};

int main(){
    string string1,string2;
    cin>>string1;
    cin>>string2;
    Solution obj;
    if (obj.compareStrings(string1,string2)){
        cout<<"Strings Are Equal";
    }else{
        cout<<"Strings aare not Equal";
    }
}