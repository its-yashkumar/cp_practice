/* You have stock market prices of several days in an array.
A transaction is one buy+sell and you are allowed to do only one transation.
You have to maximize the profit*/
// Try Greedy approach

/*                     Optimal Approach                      
Find highest selling price and find the minimum buying price in past days
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> price={5,2,6,9,8,11};
    int max_profit=0;
    int min_price=INT_MAX;//INT_MAX gives max value a inetger type variable can hold
    for (int i = 0; i < price.size(); i++)
    {
        min_price=min(min_price,price[i]);
        int curr_profit=price[i]-min_price;
        // if(curr_profit>max_profit){
        //     max_profit=curr_profit;
        // }
        max_profit=max(max_profit,curr_profit);
    }
    cout<<"Max profit is : "<<max_profit;
    
}