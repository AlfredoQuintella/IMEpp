#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool Saboya = false;
    int a, b, c;
    cin >> a >> b >> c;

    if(c == 0){
        if(a>b) cout << "Takahashi";
        else cout << "Aoki";
    }
    else{
        if(b>a) cout << "Aoki";
        else cout << "Takahashi";
    }
}
