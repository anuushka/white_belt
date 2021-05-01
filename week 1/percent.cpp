#include <iostream>

using namespace std;

int main() {
    double c, a, b, x, y;
    cin >> c >> a >> b >> x >> y;
    if (c > b) {
        c *= (1 - y / 100);
    } else if (c > a) {
        c *= (1 - x / 100);
    }
    cout << c;

    return 0;
}
