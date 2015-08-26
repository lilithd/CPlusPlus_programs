#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n;
    float neg, pos, zero = 0;
    cin >> n;
    float array[n];
    
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    
    for (int j = 0; j < n; j++){
        if (array[j] < 0){
            neg += 1;
        }else if (array[j] > 0){
            pos += 1;
        }else{
            zero += 1;
        }
    }
    cout.precision(4);
    cout << (pos/n) <<endl;
    cout << (neg/n) << endl;
    cout << (zero/n) << endl;
    
    return 0;
}
