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
    long long max = 0;
    long long row = 0;
    long long temp = 0;
        for(int i = 1;i<nums.size()-1;i++){
            if(nums[i-1] < nums[i] && nums[i+1] < nums[i]){
                max++;
                temp++;
            } else if(nums[i-1] > nums[i] && nums[i+1] > nums[i]){
                max++;
                temp++;
            } else {
                if(temp > row){
                    row = temp;
                }
                temp = 0;
            }
        }
        if(temp > row){
            row = temp;
    }    
    if(row == 1){
        max--;
    } else if(row == 2){
        max-=2;
    } else if(row > 2){
        max-=3;
    }
    cout << max << endl;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        int j;
        cin >> j;
        vector<int> nums;
        vector<int> presents;
        for(int k = 0;k<j;k++){
            int l;
            cin >> l;
            nums.push_back(l);
        }
        calculate(j,nums); 
    }
}   