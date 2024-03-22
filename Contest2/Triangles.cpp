#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i<N; i++){
        cin >> arr[i];
    }
    sort(arr, arr + N);
    int t = 0;

    for(int i=0;i<N-2;i++){
       for(int j=i+1;j<N;j++){
        int c=(arr[i]+arr[j]);
        auto itr=lower_bound(arr,arr+N,c);
        t+=(itr - &arr[j] - 1);
       }
    }

    cout << t << "\n";
}
