/*con los numeros que habia
 */

#include <iostream>
//Variables globales y marcos
#define TAM (int)30//TAM es una macro

using namespace std;

int main()
{
    // char a[]={0};
    char a[]="AB11CD44EF5X5";
    for(int var=0; var<TAM;++var){
        if(a[var]!='\0'){
            cout<<a[var]<<endl;
        }
    }
    cout<<"Imprimir solo los numeros de la cadena"<<endl;
    for(int var=0; var<TAM;++var){
        if (a[var]>='0' or a[var] <='9'){
            cout<<a[var]<<endl;
        }
    }
    return 0;
}
