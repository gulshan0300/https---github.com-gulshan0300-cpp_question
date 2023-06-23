#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
       // int n=sizeof(nums)/sizeof(int);
        int i=0;
        int j=nums.size()-1;
        int k,m;
        sort(nums.begin(),nums.end());
        while(j>i){
            if(nums[i]+nums[j]==target){
                result.push_back(i);
                result.push_back(j);
               // return result;
                return {i,j};

            }
            else if(nums[i]+nums[j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return {};
    }
};

int main(){
  Solution s;
    vector<int>result;
    vector<int>nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    result=s.twoSum(nums,9);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
