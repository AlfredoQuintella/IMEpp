#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int sum = 0, mod = 0;
    string v;
    cin >> v;

    for(int i = 0; i < v.length(); i++) {
        sum += v[i] - '0';
    }
    
    if(sum % 9 == 0) cout << "Yes";
    else cout << "No";
}
