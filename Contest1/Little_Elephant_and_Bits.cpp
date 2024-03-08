#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string number;
    cin >> number;
    for(int i = 0; i < number.length(); i++){
        if(number[i] == '0'){
            number[i] = '1';
            break;
        }
    }
    number.erase(number.begin());
    for(int i = 0; i < number.length(); i++){
        cout << number[i];
    }
}
