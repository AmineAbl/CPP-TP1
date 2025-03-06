#include <iostream>

using namespace std;

int main()
{
    int t[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    bool tab[10] = {false};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tab[t[i][j]] == false) {
                tab[t[i][j]] = true;
            }
            else {
                cout<<"pas une permutation " <<endl;
                return 0;
            }
        }
    }

    for (int i = 1; i < 10; i++) {
        if (tab[i] == false) {
            cout << "pas une permutation" << endl;
            return 0;
        }
    }

    cout << "est une permutation" << endl;
    return 0;
}
