#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(vector<int> nums){
    sort(nums.begin(),nums.end());
    bool val = false;
    for(int i = 0;i<nums.size()-1;i++){
        if(nums[i] == nums[i+1]){
            val = true;
            break;
        }
    }
    if(val == true){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
         vector<int> nums;
         int val;
         cin >> val;
         for(int j=0;j<val;j++){
             int vals;
             cin >> vals;
             nums.push_back(vals);
         }
         calculate(nums);
    }
}