#include<iostream>
#include <vector>
using namespace std;
class TwoSum {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            for(int i=0;i<nums.size()-1;i++){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[i]+nums[j]==target){
                        return {i,j};
                    }
                }
            }
            return {};
        }
    };
int main(){
    TwoSum obj;
    vector<int>nums={2,7,11,15};
    int t=9;
    vector<int>res=obj.twoSum(nums,t);
    if(!res.empty()){
        cout<<"Indices: "<<res[0]<<", "<<res[1]<<endl;
    }
    else{
        cout<<"No valid pair found!"<<endl;
    }
    return 0;
}