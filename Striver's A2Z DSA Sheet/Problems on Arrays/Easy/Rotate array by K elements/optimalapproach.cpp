#include <iostream>
#include <vector>
using namespace std;

class Solutoin{
public:
    vector<int> RotateArray(vector<int>& arr, int k, string direction){
        int n = arr.size();
        if(n==0 || k==0 )  return arr ;
        k = k%n ;
        if(direction == "right"){

        } else if (direction == "left"){

        }
    }
};

int main(){
    Solutoin obj;
    vector<int> arr = {1,2,4,5,6,4,7,8};
    
    int k =2;
    string direction = "right";
    obj.RotateArray(arr, k, direction);
}