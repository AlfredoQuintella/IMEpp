#include <iostream>
#include <map>
#include <string.h>

using namespace std;

int main(){
    int N, a, b, t;
    string name;
    cin >> N;
    map<pair<int,int>, string> list;

    for(int i = 0; i < N; i++){
        cin >> a >> b >> name;
        list[{a,b}] = name;
    }

    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        cout << list[{a,b}] << " ";
    }
}
