#include <iostream>

using namespace std;

int main()
{
    int tab[5]={1,2,3,2,1};
    int i,j,uni,compt;
    for(i=0;i<5;i++){
        compt=0;
        for(j=0;j<5;j++){
            if(tab[i] == tab[j]){
                compt++;
            }

        }
        if(compt == 1){
            uni = tab[i];
        }
    }
    cout<<"element unique est : "<<uni<<"\n";
    return 0;
}
