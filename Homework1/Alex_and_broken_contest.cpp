#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int contador(string& str, const char* list){
    int contador = 0;
    string::size_type pos = 0;
    while((pos = str.find(list, pos)) != string::npos){
        ++contador;
        ++pos;
    }
    return contador;
}

int main(){
    int sum;
    string name;
    const char* list[5] = {"Danil", "Olya", "Slava", "Ann", "Nikita"};
    cin >> name;
    sum  = contador(name, list[0]) + contador(name, list[1]) + contador(name, list[2]) + contador(name, list[3]) + contador(name, list[4]);
    if(sum == 1) cout << "YES";
    else cout << "NO";
}
