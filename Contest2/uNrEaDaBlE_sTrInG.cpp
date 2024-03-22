#include <iostream>
#include <string>

using namespace std;

int main(){
    string S;
    int a;
    int i = 1;
    cin >> S;
    for(char c : S){
        if(i%2 == 1){
            a = c - 'a';
            if(!(a<=26 && a>=0)){
                cout << "No";
                return 0;
            }
        }
        else{
            a = c - 'A';
            if(!(a<=26 && a>=0)){
                cout << "No";
                return 0;
            }
        }
        i++;
    }
    cout << "Yes";
}
