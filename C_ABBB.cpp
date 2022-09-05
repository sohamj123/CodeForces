#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>

using namespace std;

void calculate(string str){
    int b= 0;
    int a = 0;
    for(int i = 0; i<str.length();i++){
        if(str.at(i) == 'A'){
            a++;
        } if(str.at(i) == 'B'){
            if(a>0){
                a--;
            } else {
                b++;
            }
        }
    }
    int total = a + b%2;
    cout<<total<<endl;
}


int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        string path;
        cin >> path;
        calculate(path);
    }
}