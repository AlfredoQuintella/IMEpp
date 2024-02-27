#include <iostream>
#include <string.h>
#include <utility>
#include <vector>

using namespace std;

void sorting(string str[], int a){
    bool swapped;
    for (int i = 0; i < a - 1; i++) {
        swapped = false;
        for (int j = 0; j < a - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                swap(str[j], str[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main(){
    int N, K, mantem;
    cin >> N >> K;
    string name [N];

    for(int i = 0; i < N; i++) cin >> name[i];

    sorting(name, K);
    
    for (int i = 0; i < K; i++) cout << name[i] << endl;
}
