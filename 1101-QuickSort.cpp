#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int A[MAXN] = {0};
vector<int> res;
int N;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> N;
    for(int i = 0;i < N;i++)
        cin >> A[i];
    for(int i = 0;i < N;i++){
        int k = -1,j = N;
        while(k < i && A[++k] < A[i]);
        if(k != i)  continue;
        while(j > i && A[--j] > A[i]);
        if(j != i)  continue;
        res.emplace_back(A[i]);
    }
    int n = res.size();
    cout << n << endl;
    for(int m = 0;m < n;m++)
        if(m == 0)  cout << res[0];
        else    cout << " " << res[m];
    return 0;
}
