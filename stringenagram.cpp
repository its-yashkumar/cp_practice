/*
In both the strings letters and same and their frequency is also same then they are enagrams

Given two strings find whether they are enagrams or not?

1) Solution sort both strings and compare
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> count1(26),count2(26);
   string s1="apple";
   string s2="elapp";
   int flag=1;
   for (int i = 0; i < s1.size(); i++)
   {
    count1[s1[i]-'a']++;
   }
   for (int i = 0; i < s2.size(); i++)
   {
    count2[s2[i]-'a']++;
   }
   for (int i = 0; i < 26; i++)
   {
    if(count1[i]!=count2[i]){
        cout<<"Not an enagram";
        flag=0;
        break;
    }
   }
   if(flag==1){
   cout<<"Its an enagram";
   }
   
}