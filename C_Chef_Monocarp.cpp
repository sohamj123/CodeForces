#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(int n,vector<int> nums){
    int number = 0;
    sort(nums.begin(),nums.begin() + n);
    for(int i = 0;i < n;i++){
        if(i == 0){
            if(nums[i] == nums[i + 1] && nums ){
                nums[i] = nums[i+1] - 1;
                number++;
            }
        }
    }
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