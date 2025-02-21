#include <iostream>

using namespace std;

int main()
{
    int tab[6] = {3,8,5,2,4,7};
    int position = 0;

    for (int i = 0; i < 6; i++) {
        if (tab[i] % 2 == 0) {
            swap(tab[i], tab[position]);
            position++;
        }
    }
    for (int i = 0; i < 6; i++) {
        cout <<tab[i];
    }

    return 0;
}
