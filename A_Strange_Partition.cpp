#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
#include <cmath>   
#include <unordered_set>
using namespace std;

void calculate(int x, vector<int> nums){
    long long maxSum = 0;
    for(int i = 0;i<nums.size();i++){
        if(nums[i]%x == 0){
            maxSum += nums[i]/x;
        } else {
            maxSum += nums[i]/x + 1;
        }
        
    }
    long long minSum = 0;
    for(int i = 0; i<nums.size();i++){
        minSum += nums[i];
    }
    if(minSum % x == 0){
        minSum /= x;
    } else {
        minSum = minSum/x + 1;
    }
    cout << minSum << " " << maxSum << endl;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        int j;
        int t;
        cin >> j >> t;
        vector<int> nums;
        for(int k = 0;k<j;k++){
            int l;
            cin >> l;
            nums.push_back(l);
        }
        calculate(t,nums); 
    }
}   