/*
 */

#include <iostream>
//Variables globales y marcos
#define TAM (int)10

using namespace std;

int main()
{
   // char a[]={0};
    char a[]="AB11CD44";
    for(int var=0; var<TAM;++var){
        cout<<a[var]<<endl;
    }
    return 0;
}
