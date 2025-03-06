#include <iostream>

using namespace std;

int Kadan(int t[3][4],int n,int m){

int max_totale=0;
int pos=0;

for(int i=0;i<n ; i++){
    int max_ending_here=0;
    int max_so_far=0;
        for(int j=0;j<m ; j++){

        max_ending_here=max_ending_here+t[i][j];
        max_ending_here=max(max_ending_here,0);

        max_so_far=max(max_so_far,max_ending_here);

    }
    if(max_totale < max_so_far){
        pos=i;
    }
    max_totale=max(max_totale,max_so_far);
}
cout<< "sous tableau maximale [";
for(int j=0; j<m ; j++){
    cout<< "\t"<<t[pos][j];
}
cout<<"]"<<endl;


return max_totale;
}

int main()
{
    int t[3][4] ={
    {-2,1,-3,4},
    {1,2,1,-5},
    {4,-1,2,1}
    };

    int k=Kadan(t,3,4);
    cout<<"la somme est : " << k << endl;
    return 0;
}
