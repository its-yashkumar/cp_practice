/*
                                  Morse Algorithm
    We take a candidate for majority element and we will count its votes.
    The wrost case votes of majority elemnts are n/2+1 subtract the number of remaining elemnts.
    If vote of a candidate is 0 then it is not a majority element
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> v={2,9,1,1,9,6,9,9,9};
   int candidate=v[0];
   int count=1;
   for (int i = 1; i < v.size(); i++)
   {
     if(v[i]==candidate){
        count++;
     }
     else if (v[i]!=candidate)
     {
        count--;
     }
     if (count==0)
     {
        candidate=v[i];
     }
     
    }
    cout<<"Majority is : "<<candidate;
   
}