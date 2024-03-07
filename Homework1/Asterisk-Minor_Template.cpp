#include <iostream>
#include <string.h>

using namespace std;

void solve(){
    string str1, str2;
    cin >> str1 >> str2;
    string sub1, sub2, save = "";
    int contador, test;
    for (int i = 1; i <= str2.length(); i++){
        for (int j = 0; j < str2.length() - i + 1; j++){
            sub2 = str2.substr(j, i);
            test = str1.find(sub2);
            if (test != string::npos){
                if (sub2.length() > save.length()) save = sub2;
            }
        }
    }
    if(save.length() > 1) cout << "YES" << "\n" << "*" << save << "*" << "\n";
    else{
        if(str1.front() == str2.front()) {
            cout << "YES\n";
            cout << str1.front() << "*\n";
        } else if(str1.back() == str2.back()) {
            cout << "YES\n";
            cout << "*" << str1.back() << "\n";
        } else {
            cout << "NO\n";
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
