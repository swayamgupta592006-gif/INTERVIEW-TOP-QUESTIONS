//MAX +VE SUM ALAG
//MIN -VE SUM ALAG
//AUR UNN DONO KA ABSOLUTE THEN MAX
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main(){
    vector<int> nums={1,-3,2,3,4};
    int maxsubsum=0;
    int minsubsum=0;
    int maxsum=0;
    int minsum=0;
    // yeh ->> KADANES ALGO//
    //////
    for(int i=0;i<nums.size();i++){
        maxsubsum=max(nums[i],maxsubsum+nums[i]);
        minsubsum=min(nums[i],minsubsum+ nums[i]);
    
    
        maxsum=max(maxsum,maxsubsum);
        minsum=min(minsum,minsubsum);
    }
    cout<<max(maxsum,abs(minsum));
    return 0;

}
//DEHPOLAAAAAAAAA



