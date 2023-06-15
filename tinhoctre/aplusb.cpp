#include <iostream>
#include <string>

using namespace std;

int main() {
    for (int i =0; i < 10000; i++) {
        cout << i << endl;
        if (i == 2506) {
            break;
        }
    }
}
