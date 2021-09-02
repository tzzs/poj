#include <iostream>

using namespace std;

int main() {
    int count = 0;
    float n;
    while (true) {
        cin >> n;
        if (n == 0.00) {
            break;
        } else {
            while (n > 0) {
                count++;
                n -= 1.00 / (count + 1);
//                cout << n << endl;
            }
            cout << count << " card(s)" << endl;
        }
    }


    return 0;
}
