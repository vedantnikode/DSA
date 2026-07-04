 #include <iostream>
 #include <vector>
 using namespace std;

class Solution{
public:
    void RotateArrayLeft(vector<int>& arr, int k){
        vector<int> temp(arr.size());
        for(int i=k; i<arr.size(); i++){
            temp[i-k] = arr[i];
        }
        int Index=0;
        for(int i=arr.size()-k; i<arr.size(); i++){
            temp[i] = arr[Index];
            Index++;

        }

        for(int i=0; i<arr.size(); i++){
            cout<<temp[i]<<" ";
        }

    }

    void RotateArrayRight(vector<int>& arr, int k){
        vector<int> temp(arr.size());
        for(int i=0; i<arr.size(); i++){
            temp[(i+k)%arr.size()] = arr[i];
        }
        // int Index=0;
        // for(int i=arr.size()-k; i<arr.size(); i++){
        //     temp[Index] = arr[i];
        //     Index++;
        // }

     

        for(int i=0; i<arr.size(); i++){
            cout<<temp[i]<<" ";
        }

    }
};


int main(){
    Solution obj;
    vector<int> arr = {1,2,3,4,5,6,7};
    
    obj.RotateArrayLeft(arr, 2);
    cout<<endl;
    obj.RotateArrayRight(arr, 2);
    
}