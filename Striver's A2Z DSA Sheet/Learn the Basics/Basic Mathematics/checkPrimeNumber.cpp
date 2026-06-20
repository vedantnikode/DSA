#include <iostream>
using namespace std;

class Solutions{
public:
    bool PrimeNumber(int n){
        if (n<=1){
            return false;
        }

        int count=0;
        for (int i=2; i<n; i++){
            if (n%i==0){
                count++;
            }
           
        }
        if (count>0){
            return false;
        }else{
            return true;
        }
    }
};

int main(){
   Solutions obj;
   int n;
   cin>>n;
   cout<<obj.PrimeNumber(n); 
}