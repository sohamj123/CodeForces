#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>

using namespace std;
void calculate(int x1,int y1,int x2, int y2){
    int total;
    if(x1 != x2){
        if(y1 != y2){
            total = abs(x2-x1)+2+abs(y2-y1);
        } else {
            total = abs(x2-x1);
        }
    } else {
        total = abs(y2-y1);
    }
    cout << total << endl;
}   
int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int x1, y1,x2,y2;
        cin >> x1 >> y1>> x2>> y2;
        calculate(x1,y1,x2,y2);
    }
}