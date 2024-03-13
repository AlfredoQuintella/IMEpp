#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> check(8, vector<bool>(8, false));
vector<vector<bool>> ocup(8, vector<bool>(8, false));
int contador = 0;

bool search(vector<vector<bool>> check, vector<vector<bool>> ocup, int n, int m){
    for(int i = 0; i<8; i++){
        if(check[n][i] || check[i][m] || ocup[n][m]) return false;
        if(n-i >= 0 && m-i >= 0 && check[n-i][m-i]) return false;
        if(n-i >= 0 && m+i < 8 && check[n-i][m+i]) return false;

    }
    return true;
}

void solve(vector<vector<bool>> check, int row = 0){
    if(row == 8){
        contador++;
        return;
    }

    for(int i = 0; i < 8; i++){
        if(search(check, ocup, row, i)){
            check[row][i] = 1;
            solve(check, row+1);

            check[row][i] = 0;
        }
    }
}

int main() {
    char list[8][8];
    for(int i = 0; i<8; i++){
        for(int j = 0; j<8; j++){
            cin >> list[i][j];
            if(list[i][j] == '*') ocup[i][j] = 1;
        }
    }
    solve(check);
    cout << contador; 
}
