#include<bits/stdc++.h>
using namespace std;
int main(){
    // cout<<"hello world";
    vector<int> a={2,4,3,1,7,11};
    int target=5;
    int size=a.size();
    cout<<"The size of vector is :"<<size<<endl;
    int s=0,e=a.size()-1;
    sort(v.begin(),v.end());
    while (s<e)
    {
        int sum=a[s]+a[e];
        if(target==sum){
            cout<<"Yes possible and elements at :"<<s<<" and "<<e<<endl;
            break;
        }

    }
    
}