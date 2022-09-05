#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(vector<int> nums){
    int largest = 0;
    vector<int> pos;
    int place = -2;
    for(int i = 0; i<nums.size();i++){
        if(nums[i] > largest){
            pos.clear();
            largest = nums[i];
            pos.push_back(i);
            continue;
        }
        if(nums[i] == largest){
             pos.push_back(i);
        }
    }
    for(int i=0;i<pos.size();i++){
        if(pos[i] == 0){
            if(nums[pos[i]+1] < largest){
                place = pos[i];
            }
        } else if(pos[i] == nums.size()-1){
            if(nums[pos[i]-1] < largest){
                place = pos[i];
            }
        } else {
            if(nums[pos[i]+1] < largest || nums[pos[i]-1] < largest){
                place = pos[i];
            }
        }
    }
    
    cout << place+1 << endl;
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