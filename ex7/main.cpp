#include <iostream>

using namespace std;

int main() {

    int tab[3][4] ={
        {2, 5},
        {1, 2, 3, 4},
        {1, 1, 3}
    };

    int maxs= -1;
    int maxi= -1;

    for (int i=0;i<3;i++) {
        int somme = 0;
        for (int j=0;j<4;j++) {
            somme += tab[i][j];
        }
        cout << "la ligne " <<i+1<< " a une somme de : " <<somme<< endl;
        if (somme > maxs) {
            maxs= somme;
            maxi= i;
        }
    }
    cout << "la ligne avec la plus grande somme est la ligne " << maxi + 1
         << " avec une somme de : " <<maxs<< endl;

    return 0;
}
