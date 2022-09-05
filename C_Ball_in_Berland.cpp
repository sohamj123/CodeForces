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
using namespace std;
void calculate(vector< vector<int> > nums,int x){
    int count = 0; 
    if(x < 2){

    } else {
        for(int i = 0;i<x;i++){
            int z = nums[0][i];
            int y = nums[1][i];
            for(int j = i+1;j<x;j++){
                if(z != nums[0][j] && y != nums[1][j]){
                    count++;
                }
            }
        }
    }
    cout << count << endl; 
}

int main(){
    int x;
    cin >> x;
    for(int i = 0;i<x;i++){
        int x,y,z;
        cin >> x >> y >> z;
        vector< vector<int> > nums;
        for(int i = 0; i<2;i++){
            vector<int> hold;
            for(int i = 0;i<z;i++){
                int l;
                cin >> l;
                hold.push_back(l);
            }
            nums.push_back(hold);
        }
        calculate(nums,z);
    }
}   