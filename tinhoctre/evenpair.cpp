    // https://tinhoctre.vn/problem/evenpair
    #include <iostream>
    #include <vector>

    using namespace std;

    int main() {
        vector<int> array;
        int n;
        cin >> n;
        int count = 0;
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if (i * j % 2 == 0) {
                    count++;
    //                array.push_back()
                }
            }
        }
        cout << count;
    }
