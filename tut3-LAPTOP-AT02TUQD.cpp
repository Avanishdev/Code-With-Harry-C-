#include<iostream>
using namespace std;

int main(){
    float sum=4.5;
     cout<<"Hello World"<<sum;
    return 0;
}
//Subtract the Product and Sum of Digits of an Integer
// class Solution {
// public:
//     int subtractProductAndSum(int n) {
//        int prod=1;
//         int sum=0;
        
//         while(n!=0){
            
//         int num=n%10;
//            prod = prod * num;
//             sum=sum+num;
//             n=n/10;
//         }
//         int ans=prod-sum;
//         return ans;
//     }
// };

//Number of 1 bits
// class Solution {
// public:
//     int hammingWeight(uint32_t n) {
//        int count=0;
//         while(n!=0){
//             if(n&1){
//                 count++;
//             }
//             n=n>>1;
//         }
//         return count;
//     }
// };