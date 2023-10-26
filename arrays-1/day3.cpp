#include<iostream>
#include<vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
     
     int sum=0;
     int max_sum=INT_MIN;
     for(int i=0;i<nums.size();i++) 
     {
         if(sum<0)
     {
         sum=0;
     }
        sum=sum+nums[i];
        max_sum=max(max_sum,sum);
     }
     
     return max_sum;
    }