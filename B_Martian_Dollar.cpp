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
void calculate(int x,vector<int> nums){
    long long max1 = x;
    long long max2 = x;
    double maxRatio = 1;
    int num1 = 1;
    int num2 = 1;
    for(int i = 0;i<nums.size();i++){
        double temp1 = nums[i];
        for(int j = 1;j<nums.size();j++){
            double temp2 = nums[j];
            if(temp2/temp1 > maxRatio){
                maxRatio = temp2/temp1;
                num1 = temp1;
                num2 = temp2;
            }
        }
    }


}
int main(){
        int x,y;
        cin >> x >> y;
        vector<int> nums;
        for(int i = 0;i<x;i++){
            int l;
            cin >> l;
            nums.push_back(l);
        }
        calculate(y,nums);
}   