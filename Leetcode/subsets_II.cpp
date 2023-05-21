#include<bits/stdc++.h>
using namespace std;

static vector<vector<int>> ans;
static vector<int> temp;

vector<vector<int>> subsets(vector<int> myv, int p){
    vector<int> a;
    if(p==myv.size()){
        return ans;
    }
    a = subsets(myv,p++);
    temp.push_back(myv[p]);
    a = subsets(myv,p++);
    ans.push_back(temp);
    temp.clear();
    return ans;
}


int main(){
    vector<int> v{1,2,3,4};
    vector<vector<int>> ans2 = subsets(v, 0);
    for(auto x: ans2){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}