#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> one={1,3,5,7,9};
    vector<int> two={2,4,6,8,10};
    vector<int> sorted;
    int a=0,b=0;
    while (a<one.size() || b<two.size())
    {
        if(one[a]<=two[b]){
            sorted.push_back(one[a]);
            // cout<<"sorted "<<sorted[a];
            a++;
        }
        else if(one[a]>two[b]){
            sorted.push_back(two[b]);
            b++;
        }
    }
    while (a<one.size())
    {
        sorted.push_back(one[a]);
        a++;
    }
    while (b<one.size())
    {
        sorted.push_back(two[b]);
        b++;
    }
    int i=0;
    while(i<sorted.size()){
      cout<<sorted[i]<<" ";
      i++;
    }
    
    
}