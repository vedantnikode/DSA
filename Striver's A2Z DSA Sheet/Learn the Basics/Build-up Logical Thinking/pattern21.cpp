#include <iostream>
using namespace std;

class Solution {
public:
    void pattern(int n) {
        for(int i=1; i<n; i++){
            for(int j=1; j<n; j++){
                if(i==1 | j==1 | i==n-1 | j==n-1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }   
            cout<<endl;
        }   
        
            
    }

    
};


int main(){
    Solution obj;
    obj.pattern(5);
}