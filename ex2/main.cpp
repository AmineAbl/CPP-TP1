#include <iostream>

using namespace std;

int main()
{
    int tab[7]={1,4,6,2,3,5,7};
    int sommecible=7;

    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            if(tab[i] + tab[j] == 7){
                cout<<"("<<tab[i]<<","<<tab[j]<<")";
            }
        }
    }
    return 0;
}
