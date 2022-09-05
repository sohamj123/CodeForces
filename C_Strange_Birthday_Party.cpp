#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
#include <cmath>   
#include <unordered_set>
using namespace std;

void calculate(int x, vector<int> nums, vector<int> presents){
    long long sum = 0;
    vector<int> numPresents;
    long long additions = 0;
    for(int i = 0;i<presents.size();i++){
        numPresents.push_back(0);
    }
    for(int i = 0;i<nums.size();i++){
        numPresents[nums[i]-1]++;
    }
    for(int i = 0;i<numPresents.size();i++){
        additions += numPresents[i] + 1;
        sum += (numPresents[i] + 1) * presents[i];
        if(additions > nums.size()){
            sum -= (additions - nums.size()) * presents[i];
            break;
        }
        if(additions == nums.size()){
            break;
        }
    }
    cout << sum << endl;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        int j;
        int t;
        cin >> j >> t;
        vector<int> nums;
        vector<int> presents;
        for(int k = 0;k<j;k++){
            int l;
            cin >> l;
            nums.push_back(l);
        }
        for(int k = 0;k<t;k++){
            int l;
            cin >> l;
            presents.push_back(l);
        }
        calculate(t,nums,presents); 
    }
}   