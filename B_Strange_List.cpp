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
    long long sum = 0;
    long long origSum = 0;
    for(int i = 0;i<nums.size();i++){
        origSum += nums[i];
    }
    int i = 0;
    int origSize = nums.size();
    while(nums[i]%x == 0 && i<nums.size()){
        nums.push_back(nums[i]/x);
        i++;
    }
    sum += nums.size()/origSize * origSum;
    for(int j = 0;j<nums.size()%origSize;j++){
        sum+=nums[j];
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
        for(int k = 0;k<j;k++){
            int l;
            cin >> l;
            nums.push_back(l);
        }
        calculate(t,nums); 
    }
}   