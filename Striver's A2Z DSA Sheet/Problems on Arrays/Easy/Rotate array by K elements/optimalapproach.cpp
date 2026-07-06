#include <iostream>
#include <vector>
using namespace std;

class Solutoin{
public:

    void ReverseArray(vector<int>& arr, int lower, int upper){
        while(lower<upper){
            swap(arr[upper],arr[lower]);
            lower++;
            upper--;

        }
       
    }

    vector<int> RotateArray(vector<int>& arr, int k, string direction){
        int n = arr.size();
        if(n==0 || k==0 )  return arr ;
        k = k%n ;
        if(direction == "right"){
            ReverseArray(arr, 0, n-1 );
            ReverseArray(arr, 0, k-1);
            ReverseArray(arr, k, n-1);

        } else if (direction == "left"){
            ReverseArray(arr, 0, k-1);
            ReverseArray(arr, k, n-1);
            ReverseArray(arr, 0, n-1 );
        }
        return arr;
    }
};

int main(){
    Solutoin obj;
    vector<int> arr = {1,2,3,4,5,6,7,8};
    
    int k =2;
    string direction = "left";
    obj.RotateArray(arr, k, direction);

    // string direction = "left";
    // obj.RotateArray(arr, k, direction);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}