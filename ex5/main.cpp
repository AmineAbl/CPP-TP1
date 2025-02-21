#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int matrice[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int tab[9];
    int index = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tab[index++] = matrice[i][j];
        }
    }
    sort(tab, tab + 9);

    bool estPermutation = true;
    for (int i = 1; i < 9; i++) {
        if (tab[i] != tab[i-1]) {
            estPermutation = true;
        } else {
            estPermutation = false;
            break;
        }
    }

    if (estPermutation) {
        cout << "C'est une permutation." << "\n";
    } else {
        cout << "Ce n'est pas une permutation." << "\n";
    }

    return 0;
}
