#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(string str,int j){
   int count = 0;
   for(int i = j-1; i>=0; i--){
       if(str.at(i) == ')'){
           count++;
       } else {
           break;
       }
   }
   if(count > (j/2)){
       cout << "Yes" << endl;
   } else {
       cout << "No" << endl;
   }
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
         int j;
         cin >> j;
         string str;
         cin >> str;
         calculate(str,j); 
    }
}