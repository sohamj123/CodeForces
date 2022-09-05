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
#include <set>
#include <stdio.h>      /* printf */
#include <math.h>  
using namespace std;
void calculate(vector<int> nums,int len){
    int i = 0;
    int count = 0;
    while(i < nums.size()-1){
        if(nums[i+1] > 2*nums[i]){
            int hold = ceil((double) nums[i+1]/nums[i]);
            int power = 1;
            while(pow(2,power) < hold){
                power++;
            }
            power--;
            count += power;
        } else if(nums[i] > 2*nums[i+1]){
            int hold = ceil((double) nums[i]/nums[i+1]);
            int power = 1;
            while(pow(2,power) < hold){
                power++;
            }
            power--;
            count += power;
        }
        i++;
    }
    cout << count << endl;
}

int main(){
    int x;
    cin >> x;
    vector<int> nums;
    for(int i = 0;i<x;i++){
       int y;
       cin >> y;
       for(int j = 0;j<y;j++){
           int z;
           cin >> z;
           nums.push_back(z);
       }
       calculate(nums,y);
       nums.clear();
    } 
}
