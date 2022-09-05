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
    int num1 = 0;
    int num2 = 0;
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0;i<nums.size();i++){
        sum+=nums[i];
        if(nums[i] > 1){
            num2++;
        } else {
            num1++;
        }
    }
    if(sum % 2 != 0){
        cout << "NO" << endl;
    } else {
        sum1 = num2/2 * 2;
        sum2 = (num2 - num2/2) * 2;
        num1 -= sum2-sum1;
        sum2 += sum2-sum1;
        if(num1%2 != 0){
            cout << "NO" << endl;
        } else if(num1 < 0){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
        
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