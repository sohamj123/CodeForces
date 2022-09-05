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
#include <set>
#include <stdio.h>      /* printf */
#include <math.h>  
using namespace std;
void calculate(vector<int> nums, long long y){
    long long count = 0;
    long long temp = 1;
    sort(nums.begin(),nums.end());
    for(int i = 0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            temp++;
        } else {
            if(temp > count){
                count = temp;
            }
            temp = 1;
        }
    }
    if(temp>count){
        count = temp;
    }
    int every = y-count;
    if(count > every){
        cout << (count-every) << endl;
    } else if(every>=count){
        cout << (y%2) << endl;
    }
}

int main(){
    int x;
    cin >> x;
    for(int i = 0;i<x;i++){
       long long y;
       cin >> y;
       vector<int> nums;
       for(int i=0;i<y;i++){
           int z;
           cin >> z;
           nums.push_back(z);
       }
       calculate(nums,y);
    } 
}
