#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
#include <cmath>   
#include <unordered_set>
#include <iostream>     
#include <algorithm>  
#include <vector>
using namespace std;

void calculate(vector<int> nums){
    long long max = 0;
    sort(nums.begin(),nums.end());
    for(int i = 2;i<nums.size();i++){
        max += nums[i];
    }
    max -= nums[0];
    max -= nums[1];
    cout << max << endl;
}
int main(){
        int j,x,y;
        cin >> j >> x >> y; 
        vector<int> nums;
        for(int k = 0;k<j + x + y;k++){
            int l;
            cin >> l;
            nums.push_back(l);
        }
        calculate(nums); 
}   