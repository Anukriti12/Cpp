#include<bits/stdc++.h>

using namespace std;

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int dp[100][100];
int noOfFuncCall = 0;

void input(vector<int>& v, int n) {
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

int knapsack(vector<int>& val, vector<int>& wt, int n, int idx, int capacity) {
    ++noOfFuncCall;

    if (n == idx) {
        return 0;
    }
    if (dp[idx][capacity] != -1) return dp[idx][capacity];

    int q1 = 0, q2 = 0;
    if (wt[idx] <= capacity) {
        q1 = val[idx] + knapsack(val, wt, n, idx + 1, capacity - wt[idx]);    // agr given cheez utha li to baiyo ke liye recursion se mngwa liya
    }

    q2 = knapsack(val, wt, n, idx + 1, capacity);  // agr given nhi uthai to agli se pooch liya
    return dp[idx][capacity] = max(q1, q2);

}

void print(int dp[100][100], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << dp[i][j] << " " ;
        }
        cout << endl;
    }
}

int knapsackdp(vector<int>& val, vector<int>& wt, int n, int capacity) {
    int dp[100][100] = {};      // 99 * 99  storing itemnumber(wt) and value as 2d array with 1 row and col each extra

    for (int itemNo = 1; itemNo <= n; ++itemNo) {           // NOTE: as we have 1 row and column extra so start from 1
    	                                                      // OUR ARRAYS HAVE INDEX FORM 0 SO SUBTTRACT 1 TO COMPENSATE FOR THE EXTRA CELLS
        for (int col = 1; col <= capacity; ++col) {
            int q1 = 0, q2 = 0;
            if (wt[itemNo - 1] <= col) {
                q1 = val[itemNo - 1] + dp[itemNo - 1][col - wt[itemNo - 1]];   // item utha li to kya hoga   
                                                              // uthai hui ka ans upr vali row me stored hoga pehle se
            }
            q2 = dp[itemNo - 1][col];           // item nhi uthai to kya hoga
            dp[itemNo][col] = max(q1, q2);    // dono ko maxretueen kra do
        }
    }
    // print(dp, n + 1, capacity +1);
    return dp[n][capacity];
}

int main() {
    int n;
    cin >> n;
    vector<int> val(n);
    vector<int> wt(n);
    input(val, n);
    input(wt, n);

    memset(dp, -1, sizeof dp);

    int capacity;
    cin >> capacity;

    // int ans = knapsack(val , wt, n, 0, capacity);
    int ans = knapsackdp(val , wt, n, capacity);
    cout << ans << " " << noOfFuncCall;
}