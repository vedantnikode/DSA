class Solution {
public:
    int value(char c){
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        return 1000; 
    }

    int romanToInt(string s){
        int ans=0;
        for(int i=0; i<s.length(); i++){
            if (value(s[i])<value(s[i+1]) && i+1<s.length()){
                ans = ans - value(s[i]);

            }else{
                ans = ans + value(s[i]);
            }
        }
        return ans; 
    }
    
};


#include <iostream>
using namespace std;

int value(char c){
    if(c=='I') return 1;
    if(c=='V') return 5;
    if(c=='X') return 10;
    if(c=='L') return 50;
    if(c=='C') return 100;
    if(c=='D') return 500;
    if(c=='M') return 1000; 
}

int main(){ 
    string s = "LVIII";
    int ans=0;
    for(int i=0; i<s.length(); i++){
        if (value(s[i])<value(s[i+1]) && i+1<s.length()){
            ans = ans - value(s[i]);

        }else{
            ans = ans + value(s[i]);
        }
    }
    
    cout<<ans;
    return ans;
}