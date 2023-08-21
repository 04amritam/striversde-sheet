//3 1 2 5 3 
//3 4
#include <bits/stdc++.h>

using namespace std;
int repeatmissing(vector<int>&nums){
    int n=nums.size();
    int ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++)
    {cout<<nums[i]<<" ";}
    cout<<endl;
    for(int i=0;i<n;i++){
        if(nums[i]!=i+1){
            return nums[i];
            
            break;
            
        }
     
    }
}

int main()
{
    vector<int>nums={3, 1, 2, 5, 4, 6, 7, 5};
    int n=nums.size();
    int z=repeatmissing(nums);
    cout<<z<<endl;

    return 0;
}