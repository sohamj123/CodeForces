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
    long long sumA = 0;
    long long sumB = 0;
    bool aliceTurn = true;
    sort(nums.begin(),nums.end(),greater<int>());
    for(int i = 0;i<nums.size();i++){
        if(aliceTurn){
            if(nums[i]%2 == 0){
                sumA+= nums[i];
            }
        } else {
            if(nums[i]%2 == 1){
                sumB+= nums[i];
            }
        }
        aliceTurn = !aliceTurn;
    }
    if(sumA > sumB){
        cout << "Alice" << endl;
    } else if(sumB > sumA){
        cout << "Bob" << endl;
    } else {
        cout << "Tie" << endl;
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