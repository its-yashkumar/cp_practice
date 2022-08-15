/* A majority element is a element that apprears in an array more than n/2 times.
n is size of array*/
/* One initutive approach is that majority element is at the center of sorted array*/
#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v={1,2,3,1,2,1,1,1};
  sort(v.begin(),v.end());
  int count=1;
  for (int i = 1; i < v.size(); i++)
  {
    if(v[i]==v[i-1]){
       count++;
    }
    else{
     count=1;
    }
    if (count>(v.size()/2))
    {
        cout<<"The majority element is : "<<v[i];
    }
    
  }
  
  }