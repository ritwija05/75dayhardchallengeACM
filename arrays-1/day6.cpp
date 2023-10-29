#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        for(int i=0;i<numRows;i++){
            vector<int> temp;
            
            // ncr / nc(r-1) = (n-r+1)/r 
            temp.push_back(1);
            for(int j=1;j<=i;j++){
                int val=(temp[j-1]*(i-j+1))/j ;
                temp.push_back(val);
            }
            ans.push_back(temp);
        }
        
        return ans;
    }