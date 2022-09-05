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
#include <stdio.h>
#include <ctype.h>
#include <iostream>     
#include <algorithm>    
#include <vector>
using namespace std;
void calculate(int x, vector<int> nums){
    sort(nums.begin(),nums.end());
    if(nums[nums.size()-1] > x){
        if(nums[0] + nums[1] <= x ){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "YES" << endl;
    }
}

int main(){
    int x;
    cin >> x;
    for(int i = 0;i<x;i++){
        int y;
        int z;
        cin >> y >> z;
        vector<int> nums;
        for(int i = 0; i<y;i++){
            int l;
            cin >> l;
            nums.push_back(l);
        }
        calculate(z,nums);
    }
}   