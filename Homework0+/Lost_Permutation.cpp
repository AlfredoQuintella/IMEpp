#include <iostream>
#include <vector>

using namespace std;

void solve(){
int m, s, a, big = 0, sum = 0, num, sum2 = 0;
cin >> m >> s;
vector<int>b;

for(int i = 0; i < m; i++){
    cin >> a;
    b.push_back(a);
    sum += b[i];
    if(b[i] > big) big = b[i];
    if(b[i] == 0) goto jump;
}

sum = sum + s;

for(int i = 0; i < 100; i++){
    if(sum2 >= sum) break;
    sum2 += i;
    num = i;
}

if((sum2 != sum) || (num < big)) {
    jump:
    cout << "NO" << endl;
}
else{
    cout << "YES" << endl;
}
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
