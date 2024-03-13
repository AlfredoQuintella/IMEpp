#include <iostream>

using namespace std;

int main(){
    int n, a, b, c, sum = 0, temp;
    cin >> n >> a >> b >> c;

    for(int i = 0; i <= n / a; i++){
        for(int j = 0; j <= n / b; j++){
            if((n-(a*i)-(b*j))%c == 0 && (n-(a*i)-(b*j)) >= 0){
                temp = i + j + (n-(a*i)-(b*j))/c;
                if(sum < temp){
                    sum = temp;
                }
            }
        }
    }
    cout << sum;
}
