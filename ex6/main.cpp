#include <iostream>

using namespace std;

int main()
{
    int tab[3][4]={
    {1,2,3},
    {4,5},
    {6,7,8,9}
    };
    for(int i =0;i<3;i++){
        int somme=0;
        for(int j=0;j<4;j++){
            somme+=tab[i][j];
        }
        cout<<"la somme de la ligne "<<i+1<<" est : "<<somme<<"\n";
    }
    return 0;
}
