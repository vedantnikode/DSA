#include <iostream>
using namespace std;

class Solutions{
public:
    bool pallindrome(string s){
        int n=s.length();
        for(int i=0; i<n/2; i++){
            if (s[i]==s[n-i-1]){
                continue;
                
            }else{
                return false;
            }
        }
        return true;

    }
};

int main(){
    Solutions obj;
    cout<<obj.pallindrome("ABCDCBA");
    return 0;
}