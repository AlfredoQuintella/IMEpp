#include <iostream>

using namespace std;

char tab[4][4];
int n, temp = 0, qtt = 0;

bool check(int linha, int coluna){
    if(tab[linha][coluna] == 'X') return false;

    for(int i = linha + 1; i < n; i++){
        if(tab[i][coluna] == 'X') break;
        if(tab[i][coluna] == 'T') return false;
    }

    for(int i = linha - 1; i >=0; i--){
        if(tab[i][coluna] == 'X') break;
        if(tab[i][coluna] == 'T') return false;
    }

    for(int i = coluna + 1; i < n; i++){
        if(tab[linha][i] == 'X') break;
        if(tab[linha][i] == 'T') return false;
    }

    for(int i = coluna - 1; i >= 0; i--){
        if(tab[linha][i] == 'X') break;
        if(tab[linha][i] == 'T') return false;
    }

    return true;
}

void bt(int linha = 0, int coluna = 0){
    if(linha==n){
        if(temp > qtt) qtt = temp;
        return;
    }

    if(tab[linha][coluna] == '.'){
        if(check(linha, coluna)){
            tab[linha][coluna] = 'T';
            temp++;
            if(coluna == n - 1)
                bt(linha + 1, 0);
            else
                bt(linha, coluna + 1);
            tab[linha][coluna] = '.'; 
            temp--;
        }
        if(coluna == n - 1)
            bt(linha + 1, 0);
        else
            bt(linha, coluna + 1);
    }
    else{
        if(coluna == n - 1)
            bt(linha + 1, 0);
        else
            bt(linha, coluna + 1);
    }
}

void solve(){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> tab[i][j];
        }
    }

    temp = qtt = 0;
    bt();
    cout << qtt << '\n';

}

int main(){
    cin.tie(NULL);
	ios_base::sync_with_stdio(false);

    while(cin >> n){
        if(n == 0) break;
        solve();
    }
}
