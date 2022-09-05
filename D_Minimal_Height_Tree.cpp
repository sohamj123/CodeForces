#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(int n,vector<int> nums){
    int depth = 1;
    for(int i = 1;i<n-1;i++){
        if(nums[i] > nums[i+1]){
            depth++;
        }
    } 
    cout << depth << endl;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        int vert;
        cin >> vert;
        for(int i = 0;i<vert;i++){
            int num;
            cin >> num;
            nums.push_back(num);
        }
        calculate(vert,nums);
        nums.clear();
    }
}