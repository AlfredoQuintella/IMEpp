#include <iostream>
#include <set>

using namespace std;

int main(){
    int n, a;
    cin >> n;
    set<int>list;
    while(n--){
        cin >> a;
        list.insert(a);
    }
    cout << list.size();
}
