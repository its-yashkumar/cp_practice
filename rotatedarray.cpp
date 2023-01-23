/*We will see how to apply binary search in rotated array
In a rotated array an element is taken and brought to the front
For example suppose array is 
1,2,3,4,5
after one rotation it becomes
5,1,2,3,4
after second rotation it becomes 
4,5,1,2,3 and so on*/
/*Example array for given question
5,6,7,8,9,1,2,3,4 : it is rotated 5 times
target=6
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    /*First find the mid index and element then find in which region we are either region 1 or region 2
    First element in region 1 is greater than all elements in region 2*/
    vector<int> v={5,6,7,8,9,10,1,2,3,4};
    int s=0,e=v.size()-1;
    int target=10,flag=1;
    int first=v[0];

    while (s<e)
    {
        int mid=(s+e)/2;
        // cout<<mid;
        if(v[mid]==target){
            cout<<"found it\n";
            cout<<"The index at which it was found is : "<<mid;
            flag=0;
            break;
        }
        if(v[mid]>=first){
           s=mid+1;
        //    cout<<s<<e;   
        }
         if(v[mid]<first){
           e=mid-1;  
        //    cout<<s<<e; 
        }
    }
    if(flag==1){
        cout<<"not found";
    }

}
