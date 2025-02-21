#include <iostream>

using namespace std;

int main()
{
    int tab[3][4] = {
        {-2, 1, -3, 4},
        {-1, 2, 1, -5},
        {4, -1, 2, 1}
    };
    int maxs = -10000;
    for (int i = 0; i < 3; i++) {
        int s = 0;
        for (int j = 0; j < 4; j++) {
            s += tab[i][j];
        }
        if (s > maxs) {
            maxs = s;
        }
    }
    cout << "la plus grande somme de ligne est : " << maxs << endl;

    return 0;
}
