#include<iostream>
#include<vector>
using namespace std;
 vector<int> sortarray(vector<int> &nums){
    int j=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0){
        swap(nums[i],nums[j]);
        j++;
        }
    }
    return nums;

     
    
}
int main(){
    vector<int> nums={1,2,3,4,5,6,7};
    sortarray(nums);
    for(int x:num){
        cout<<x<<" ";

    }
    return 0;

}
//DEHPOLAAAAAAAAAAAAAAAA


