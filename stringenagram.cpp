/*
In both the strings letters and same and their frequency is also same then they are enagrams

Given two strings find whether they are enagrams or not?

1) Solution sort both strings and compare
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="apple";
   string s2="elapp";
    map<char,int> count1;
    for (int i = 0; i < s1.size(); i++)
   {
    count1[s1[i]]++;
   }
   for (int i = 0; i < s2.size(); i++)
   {
    count1[s2[i]]--;
    //When using only count1 
    //count1[s2[i]-'a']--;
   }
   int flag=1;
   for (char i = 'a'; i <= 'z'; i++)
   {
     if(count1[i]!=0){
        flag=0;
        cout<<"An enagram";
        break;
     }
   }
   if(flag){
    cout<<"yes its an anagram";
   }
   

}
/*
Vector method
int main(){
   vector<int> count1(26),count2(26);
   //To space just use count1
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
    //When using only count1 
    //count1[s2[i]-'a']--;
   }
   for (int i = 0; i < 26; i++)
   {
    //When using only count1 
    //if(count1[i]!=0)
    if(count1[i]!=count2[i]){
        cout<<"Not an enagram";
        flag=0;
        break;
    }
   }
   if(flag==1){
   cout<<"Its an enagram";
   }
   
}*/