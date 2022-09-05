#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(vector<int> nums){
    int start = 0;
    int end = 0;
    for(int i = 0; i<nums.size();i++){
        if(nums[i]==0){
            continue;
        } 
        if(nums[i] == 1){
            start = i; 
            break;
        }
    }
    for(int i = nums.size(); i>-1;i--){
        if(nums[i]==0){
            continue;
        } 
        if(nums[i] == 1){
            end = i; 
            break;
        }
    }
    int count = 0;
    for(int i = start; i<end;i++){
        if(nums[i] == 0){
            count++;
        }
    }
    cout << count << endl;
}


int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int num;
        cin >> num;
        vector<int> nums;
        for(int j = 0;j<num;j++){
            int array;
            cin >> array;
            nums.push_back(array);
        } 
        calculate(nums);
    }
}