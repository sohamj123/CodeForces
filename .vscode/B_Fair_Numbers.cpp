#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(long long j){
   long long num = j;
   vector<int> digit;
   for(int i = 0;i<19;i++){
       digit.push_back(num%10);
        num /= 10;
   }
   while(true){
   bool found = true;
   for(int i = 0; digit.size();i++){
       if(digit[i] == 0){
           continue;
       } else {
           if(j%digit[i] != 0){
               found = false;
               break;
               
           }
       }

   }
   if(found){
       cout << j << endl;
       break;
   }
   j++;
   }
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
         long long j;
         cin >> j;
         calculate(j); 
    }
}