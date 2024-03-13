#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x; 
    int a[3] = {0, 0, 0};
    a[x] = 1;

    n = n%6;
    while(n--){
        if(n%2) swap(a[2], a[1]);
        else swap(a[1], a[0]);
    }

    for(int i = 0; i<3; i++){
        if(a[i] == 1){
            cout << i;
            break;
        }
    }
}
