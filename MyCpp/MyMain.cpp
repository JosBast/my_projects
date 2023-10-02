#include <iostream>
#include <cmath>

using namespace std;



int main() {
    setlocale(0, "");
    float y, z, b, a, tg;
    int x_count;
    y = 0;
    float* x = new float[10];

    cout << "¬ведите кол-во иксов:" << endl;
    cin >> x_count;

        for (int i = 0; i < x_count; i++) {
            cout << "¬ведите Z, B, A, ”гол дл€ X" << i+1 <<": " << endl;
            cin >> z >> b >> a >> tg;
            x[i] = pow(z, 3) - b + pow(a, 2) / pow(tan(tg), 2);
            y += x[i];
        }

        cout << "y = " << y;
        delete [] x;
    return 0;
    }
