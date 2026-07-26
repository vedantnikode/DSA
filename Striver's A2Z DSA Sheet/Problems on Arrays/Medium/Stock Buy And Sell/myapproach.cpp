#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution{
public:
    int Profit(vector<int>& arr){
        int n = arr.size();
        int buy=INT_MAX;
        int limit =  0;
        for(int i=0; i<n; i++){
            if(arr[i]<buy){
                buy = arr[i];
                limit = i ;
            }
        }

        int sell = INT_MIN;
        for(int j=limit; j<n; j++){
            if(arr[j]>sell){
                sell = arr[j];
            }
        }

        cout<<buy<<" "<<sell<<endl;
        return sell-buy;
    }
};

int main(){
    vector<int> arr = {7,6,4,3,1};
    Solution obj;
    cout<<obj.Profit(arr);
    return 0;
}