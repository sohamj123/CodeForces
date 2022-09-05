#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
#include <cmath>   
using namespace std;

void calculate(int height,vector<int> nums){
    vector< vector<int> > minMax;
    bool yesNo = true;
    vector<int> first;
    first.push_back(nums[0]);
    first.push_back(nums[0]+height);
    minMax.push_back(first);
    for(int i = 1;i<nums.size()-1;i++){
        vector<int> hold;
        hold.push_back(nums[i]);
        hold.push_back(height+nums[i]+height-1);
        minMax.push_back(hold);
    }
    first.clear();
    first.push_back(nums[nums.size()-1]);
    first.push_back(nums[nums.size()-1]+height);
    minMax.push_back(first);
    
    for(int i = 0;i<nums.size();i++){
        cout << minMax[i][0] << " " << minMax[i][1] << endl;
    }
    for(int i = 0;i<nums.size()-1;i++){
        if(yesNo == false){
            break;
        }
        if(minMax[i][0] >= minMax[i+1][1]){
            yesNo = false;
        }
        if(minMax[i][1] <= minMax[i+1][0]){
            yesNo = false;
        }
    }
    if(yesNo == false){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
         int h,k;
         cin >> h >> k;
         vector<int> nums;
         for(int j=0;j<h;j++){
             int l;
             cin >> l;
             nums.push_back(l);
         }
         calculate(k,nums); 
    }
}