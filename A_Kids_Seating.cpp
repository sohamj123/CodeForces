#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(int n){
    vector<int> nums;
    int num = 4*n;
    nums.push_back(num);
    for(int i = 0;i<n-1;i++){
        num-=2;
        nums.push_back(num);
    }
    for(int i = 0;i<nums.size()-1;i++){
        cout << nums[i] << " ";
    }
    cout << nums[nums.size()-1] << endl;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
         int a;
         cin >> a;
         calculate(a);
    }
}