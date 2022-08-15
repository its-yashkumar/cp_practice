/* You have stock market prices of several days in an array.
A transaction is one buy+sell and you are allowed to do only one transation.
You have to maximize the profit*/
// Try Greedy approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> price={5,2,6,9,8,11};
    int min=9999,max=0,minindex,maxindex;
    for (int i = 0; i < price.size(); i++)
    {
        if(price[i]>max){
            max=price[i];
            maxindex=i;
        }
        if (price[i]<min)
        {
            min=price[i];
            minindex=i;
        }
        
    }
    cout<<"Max and index "<<max<<" "<<maxindex<<endl;
    cout<<"Min and index "<<min<<" "<<minindex<<endl;
    cout<<"Maximum profit :"<<max-min<<endl;
}