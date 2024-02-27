#include <bits/stdc++.h>
#include <string.h>

using namespace std;

long long  pot(int n){
    long long  a = 1;
    for(int i = 0; i < n; i++){
        a = a * 26;
    }
    return a;
}

int main(){
    long long  pos = 0;
    int n, m;
    string S;
    cin >> S;
    n = S.length();
    m = n - 1;
    while(n--){
        pos = pos + pot(m - n) * (S[n] - 'A' + 1);
    }
    cout << pos;
}
