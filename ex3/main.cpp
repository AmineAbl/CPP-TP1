#include <iostream>

using namespace std;

int main() {
    int tab[6] = {3, 8, 5, 2, 4, 7};
    int* debut = tab;
    int* ptr = tab;

    for(int i=0;i<6;i++){
        if(*ptr % 2 == 0){
            int tmp=*ptr;
            *ptr=*debut;
            *debut=tmp;
            debut++;

        }
        ptr++;
    }


    cout << "le nouveau tableau est : ";
    for (int i = 0; i < 6; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    return 0;
}
