#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
#include <cmath>   
#include <unordered_set>
using namespace std;

void calculate(int j, vector<int> nums){
    int sum = 0;
    int largestSum = 0;
    
    for(int i = nums.size()-1;i>=0;i--){
        int secondNum = 0;
        if(nums[i] + i >= j){
            continue;
        } else {
            secondNum = nums[nums[i]+i];
        }
        nums[i] += secondNum;
    }
    for(int i = 0; i<nums.size();i++){
        largestSum = max(largestSum,nums[i]);
    }
    cout  << largestSum << endl;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        int j;
        cin >> j;
        vector<int> nums;
        for(int k = 0;k<j;k++){
            int l;
            cin >> l;
            nums.push_back(l);
        }
        calculate(j,nums); 
    }
}   