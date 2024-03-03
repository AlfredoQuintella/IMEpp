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
    if(list.size() != 1){
        auto it = list.begin();
        it++;
        cout << *it;
    }
    else  cout << "NO";
}
