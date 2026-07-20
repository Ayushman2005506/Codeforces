#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        nums.push_back(t);
    }
    int l=0;
    int r=nums.size()-1;
    bool first=true;
    int count1=0;
    int count2=0;
    while(l<=r){
        if(first){
            if(nums[l]>nums[r]){
                count1+=nums[l];
                l++;
            }
            else{
                count1+=nums[r];
                r--;
            }
            first=false;
        }
        else{
            if(nums[l]>nums[r]){
                count2+=nums[l];
                l++;
            }
            else{
                count2+=nums[r];
                r--;
            }
            first=true;
        }
    }
    cout<<count1<<" "<<count2;
    return 0;
}
