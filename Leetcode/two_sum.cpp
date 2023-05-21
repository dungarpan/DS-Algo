#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    vector<int>nums;
    int target;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }
    cin>>target;
    unordered_map<int,int> m;
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        int val = target-nums[i];
        if(m.find(val)!=m.end()){
            ans.push_back(i);
            ans.push_back(m[val]);
            break;
        }
        else{
            m[nums[i]] = i;
        }
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}