#include <iostream>
#include <vector>
using namespace std;

// class Solution{
// public:
//     int GCD(int n1, int n2){
//         vector<int> arr1, arr2;
//         for(int i=1; i<=n1; i++){
//             if(n1%i==0) {
//                 arr1.push_back(i);
//             }
//         }
//         for(int i=1; i<=n2; i++){
//             if(n2%i==0) {
//                 arr2.push_back(i);
//             }
//         }
//         int gcd = 1;

//         for(int i = 0; i < arr1.size(); i++) {
//             for(int j = 0; j < arr2.size(); j++) {

//                 if(arr1[i] == arr2[j]) {
//                     gcd = arr1[i];
//                 }
//             }
//         }
//         cout<< gcd;
//     }
    

// };

// int main() {
//     Solution obj;
//     obj.GCD(30,24);
// }




// beginner ffriendly

// #include <iostream>
// using namespace std;

// class Solution{
// public:
    
//     int GCD(int n1, int n2){
//         int gcd=1;
//         for(int i=1; i<=min(n1,n2); i++){
//             if(n1%i==0 && n2%i==0){
//                 gcd=i;
//             }
//         }
//         return gcd;       
//     }
    

// };

// int main() {
//     Solution obj;
//     cout<<obj.GCD(24,30);
// }


#include <iostream>
using namespace std;

class Solution{
public:
    
    int GCD(int n1, int n2){
        while (n1>0 && n2>0){
            if(n1>=n2){
                n1=n1-n2;
            }else{
                n2=n2-n1;
            }
        }  
        if (n1==0){
            return n2;
        } else{
            return n1;
        }  
    }
    

};

int main() {
    Solution obj;
    cout<<obj.GCD(30,37);
}
