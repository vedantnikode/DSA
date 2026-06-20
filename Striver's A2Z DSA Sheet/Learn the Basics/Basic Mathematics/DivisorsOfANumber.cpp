#include <iostream>
#include <vector>
using namespace std;

class Solutions{
public:
    vector<int> Divisors(int n){
        vector<int> arr;
        for(int i=1; i<=n; i++){
            if(n%i==0){
                arr.push_back(i);
            }
        }
        return arr;
    }
};

int main(){
    Solutions obj;
    vector<int> ans = obj.Divisors(60);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}