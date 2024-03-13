#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string lcs(string X, string Y) {
    int m = X.length();
    int n = Y.length();

    vector<vector<int>> L(m + 1, vector<int>(n + 1, 0));

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                L[i][j] = 0;
            } else if (X[i - 1] == Y[j - 1]) {
                L[i][j] = L[i - 1][j - 1] + 1;
            } else {
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
        }
    }

    int i = m, j = n;
    string lcs_string = "";
    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            lcs_string = X[i - 1] + lcs_string;
            i--;
            j--;
        } else if (L[i - 1][j] > L[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    return lcs_string;
}

int main() {
    string X = "THIS IS DAA SUBJECT";
    string Y = "THIS IS DAA ASSIGNMENT";

    cout << lcs(X, Y) << endl;

    return 0;
}
