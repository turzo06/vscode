#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(21);
    int n;
    cin >> n;
    v[1] = 1;
    v[2] = 2;
    for (int i = 3; i <= 20; i++)
    {
        v[i] = v[i - 2] + v[i - 1];
    }
    cout << v[n] << endl;
}