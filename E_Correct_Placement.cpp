#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
#include <cmath>   
#include <unordered_set>
using namespace std;

void calculate(vector<int> heights, vector<int> widths){
    
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        int j;
        cin >> j;
        vector<int> heights;
        vector<int> widths;
        for(int k = 0;k<j;k++){
            int l;
            int k;
            cin >> l >> k;
            heights.push_back(l);
            widths.push_back(k);
        }
        calculate(heights,widths); 
    }
}   