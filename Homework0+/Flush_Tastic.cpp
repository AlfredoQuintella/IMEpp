#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n, x1, y1, r;
    long long int x, y, test, contador = 0;
    cin >> n >> x1 >> y1 >> r ;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        test = (x1-x)*(x1-x) + (y-y1)*(y-y1);
        if (test <= r*r) {
            contador++;
        }
    }
    cout << contador;
}
