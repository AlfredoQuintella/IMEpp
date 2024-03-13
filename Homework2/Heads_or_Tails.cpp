#include <iostream>
#include <vector>

using namespace std;

int main(){
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    int contador = 0;
    vector<pair<int,int>> list;

    if((a+1 > x && a-1 < b)){
        cout << 0;
        return 0;
    }

    for(int i = a; i <= x; i++){
        if(i>b){
            for(int j = b; (j < i) && (j <= y); j++){
            list.push_back(make_pair(i,j));
            contador++;
            }
        }
    }
    cout << contador << "\n";
    for(auto it : list){
        cout << it.first << " " << it.second << "\n";
    }
}
