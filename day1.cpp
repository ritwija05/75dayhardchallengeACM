#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices) {
        if(prices.size()==0) return 0;
        int profit=0;
        int max_profit=0;
        int min=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
            }
            profit=prices[i]-min;
            if(max_profit<profit)
            {
                max_profit=profit;
            }

        }
        return max_profit;
    }