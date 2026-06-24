#include <iostream>
#include <vector>
#include <climits>
using namespace std;

pair<int,int> SecondElements(vector<int> arr){
    int first_1 = INT_MAX , last_1 = INT_MIN;
    int first_2 = INT_MAX , last_2 = INT_MIN;
    
    if(arr.size() < 2)
        return {-1,-1};

    for(int i=0; i<arr.size(); i++){
        if(arr[i]<first_1){
            first_1=arr[i];
        }
        if(arr[i]>last_1){
            last_1 = arr[i];
        }
    }
    for(int i=0; i<arr.size(); i++){
        if(arr[i]<first_2 && arr[i]!=first_1){
            first_2 = arr[i];
        }
        if(arr[i]>last_2 && arr[i]!=last_1){
            last_2 = arr[i];
        }

    }
    return {first_2, last_2};

}

int main(){
    vector<int> arr = {1,2,3,4,5,6,5,4,3,2,1};
    auto ans=SecondElements(arr);
    cout<<ans.first<<endl;
    cout<<ans.second<<endl;
    return 0;
}