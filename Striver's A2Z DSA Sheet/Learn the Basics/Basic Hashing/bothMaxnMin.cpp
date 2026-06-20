#include <iostream>
#include <unordered_map>
using namespace std;

class FrequencyCounter{
public:
    void frequency(int arr[], int n){
        unordered_map<int,int> map;
        for(int i=0; i<n; i++){
            map[arr[i]]++;
        }

        int maxFreq=0, minFreq=n;
        int maxElement=0, minElement=0;
        for(auto it : map){
            int element = it.first;
            int count = it.second;

            if(count>maxFreq){
                maxFreq=count;
                maxElement=element;
            }
            else if(count == maxFreq && element < maxElement){
            maxElement = element;
            }
            
            else if (count<minFreq){
                minFreq=count;
                minElement=element;
            }
        }

        cout<<"The Element which has Max Freq is : "<<maxElement<<endl;
        cout<<"The Element which has Min Freq is : "<<minElement<<endl;

    }


};

int main(){
    FrequencyCounter fc;
    int arr[] = {10,20,20,30,30,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    fc.frequency(arr,n);
    return 0;
}