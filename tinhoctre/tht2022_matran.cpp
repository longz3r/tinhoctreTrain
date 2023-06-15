// https://tinhoctre.vn/problem/tht2022_matran

#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main() {
    int t;
    cin >> t;
    // cin.ignore();
    int n;

    string matrixInput;
    for (int i = 0; i < t; i++) {
        cin >> n;
//        cin.ignore();
        int matrixA[n][n];
        long long matrixB[n][n];
        long long mult[n][n];
        long long tempmult[n][n];

        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cin >> matrixA[j][k];
            }
        }

        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cin >> matrixB[j][k];
            }
        }

        // Initializing elements of matrix mult to 0.
    for(int j = 0; j < n; j++){
        for(int k = 0; k <n; k++) {
                mult[j][k]=0;
        }
    }

        for (int x = 0; x < n; x++) {
            for (int y = 0; y < n; y++) {
                for (int l = 0; l < n; l++) {
                    mult[x][y] += matrixA[x][l] * matrixA[l][y];
                }
            }
        }
        //reset ma tran A ve 0
        for (int x = 0; x < n; x++) {
            for (int y = 0; y < n; y++) {
                tempmult[x][y] = 0;
            }
        }

        for (int x = 0; x < n; x++) {
            for (int y = 0; y < n; y++) {
                for (int l = 0; l < n; l++) {
                    tempmult[x][y] += mult[x][l] * matrixA[l][y];
                }
            }
        }

        string result = "YES";
        for (int x = 0; x < n; x++) {
            for (int y = 0; y < n; y ++) {
                if (tempmult[x][y] != matrixB[x][y]) {
                    result = "NO";
                    break;
                }
            }
        }
        cout << result << endl;
    }
}
