#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
#include <cmath>   
using namespace std;

void calculate(int trees,vector<int> nums){
    if(trees > 1){
        int count =0;
        vector<int> difference;
        for(int i =0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                difference.push_back(abs(nums[i]-nums[j]));
                count++;
            }
        }
        sort(difference.begin(),difference.end());
        for(int i = 0;i<difference.size()-1;i++){
            if(difference[i] == difference[i+1]){
                count--;
            }
        }
        cout << count << endl;
    } else {
        cout << 0 << endl;
    }
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
         int h;
         cin >> h;
         vector<int> nums;
         for(int j=0;j<h;j++){
             int l;
             cin >> l;
             nums.push_back(l);
         }
         calculate(h,nums); 
    }
}