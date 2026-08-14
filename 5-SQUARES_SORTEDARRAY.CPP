// SIMPLE METHOD - SQUARE KARO THEN SORT USING FUNCTION PAR FIRR TIME COMPLEXITY nlogn therefore better method TWO POINTER
#include<iostream>
#include<cmath>

#include<vector>
using namespace std;
vector<int> sortedsquares(vector<int> & nums){
    int n=nums.size();

    vector <int> ans(n);
    int i=0;
    int j=nums.size()-1;
    int pos=n-1;
    while(i<=j){
        if(abs(nums[i])>abs(nums[j])){
            ans[pos]=nums[i]*nums[i];

            i++;



        }
        else{
            ans[pos]=nums[j]*nums[j];
            j--;
        }
        pos--;
    }
    return ans;

}
int main(){
    vector<int> nums ={-888,-100,-2,78,99};
    vector <int> ans=sortedsquares(nums);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}
//DEHPOLAAAAAAAAAAAAA