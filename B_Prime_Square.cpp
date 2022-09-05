#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;
void calculate(int num){
    int exception = 809 - num + 1;
    if(exception == 719){
        exception = 49;     
    }
    if(exception == 727){
        exception = 1;
    }
    if(exception == 733){
        exception = 21;
    }
    if(exception == 739){
        exception = 1;
    }
    if(exception == 743){
        exception = 1;
    }
    if(exception == 751){
        exception = 1;
    }
    if(exception == 757){
        exception = 1;
    }
    if(exception == 761){
        exception = 25;
    }
    if(exception == 769){
        exception = 1;
    }
    if(exception == 773){
        exception = 1;
    }
    if(exception == 787){
        exception = 1;
    }
    if(exception == 797){
        exception = 1;
    }
    int pos = 0;
    for(int i = 0;i<num;i++){
        for(int j = 0;j<num;j++){
            if(j == pos){
                cout << exception << " ";
            } else {
                cout << 1 << " ";
            }
        }
        pos++;
        cout << endl;
    }
}


int main(){
    int n;
    cin >> n;
    for(int i =0;i<n;i++){
        int num;
        cin >> num;
        calculate(num);
    }
}
