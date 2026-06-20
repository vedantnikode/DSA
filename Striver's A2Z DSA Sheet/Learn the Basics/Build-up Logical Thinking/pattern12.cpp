#include <iostream>
using namespace std;

class Solution {
public:
    void pattern(int n) {
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<j;            
            } 
            for(int j=1 ; j<n+1-i ; j++){
                cout<<"  ";

            }
            for(int j=i; j>0; j--){
                cout<<j;            
            }            
            cout<<endl;          
        }

        

    }
};


int main(){
    Solution obj;
    obj.pattern(5);
}