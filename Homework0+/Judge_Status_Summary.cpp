#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, AC = 0, WA = 0, TLE = 0, RE = 0;
    cin >> N;
    string palavra;
    while(N--){
        cin >> palavra;
        if (palavra == "AC") {
            AC++;
        } else if (palavra == "WA") {
            WA++;
        } else if (palavra == "TLE") {
            TLE++;
        } else if (palavra == "RE") {
            RE++;
        }
    }
    cout << "AC x " << AC << endl;
    cout << "WA x " << WA << endl;
    cout << "TLE x " << TLE << endl;
    cout << "RE x " << RE << endl;
}
