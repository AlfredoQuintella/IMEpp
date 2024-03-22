#include <iostream>

using namespace std;

long long rest(int n){
    if(n == 0) return 1;
    long long b = rest(n/2);

    if(n%2 == 0){
        return (b%10)*(b%10);
    }
    else return 8*(b%10)*(b%10);
}

int main(){
    int n;
    cin >> n;
    int b = rest(n)%10;
    cout << b;
}
