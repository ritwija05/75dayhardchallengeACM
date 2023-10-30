#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int>& nums) {
     int len = nums.size();
        for (int num : nums) {
            //jaise hi number aaya for example 1 2 3 4 2 6 7 
            //1 aaya to 0 ko visited mark 2 aya to 1 ko visiteed mark 3 to 2 ko 4 to 3 ko 2 aya to 1 ko kro visited mark ( that was already marked visited) 
            int idx = abs(num);
            if (nums[idx] < 0) {
                return idx;
            }
            nums[idx] = -nums[idx];
        }

        return len;
    }