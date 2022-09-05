#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;
void calculate(int m,vector<int> nums){
    int sum = 0;
    for(int i = 0;i<nums.size();i++){
        sum+=nums[i];
    }
    if(m == sum){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}


int main(){
    int n;
    cin >> n;
    for(int i =0;i<n;i++){
        int num,sum;
        cin >> num;
        cin >> sum;
        vector<int> nums;
        for(int j=0;j<num;j++){
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        calculate(sum,nums);
    }
    
}