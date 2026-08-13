#include <iostream>
#include<vector>
using namespace std;
int subarrayprod(vector<int>& nums,int k){
    if(k<=1){
        return 0;
    }
    int left=0;
    int ans=0;
    long long product=1;
    for(int i=0;i<nums.size();i++){
        product=product*nums[i];
        while(product>=k){
            product=product/nums[left];
            left++;
        }
        ans=i-left+1;
    }
    return ans;
}
int main(){
    vector<int> nums={10,5,2,3};
    int k=1000;
    cout << subarrayprod(nums,k);
}
// DEHPOLAAAAAAAAAAAAAA
