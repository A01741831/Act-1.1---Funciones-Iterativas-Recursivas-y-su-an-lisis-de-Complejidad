#include <iostream>
using namespace std;


//sumaIterativa
int sumaIterativa(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    return sum;
}


//sumaRecursiva
int sumaRecursiva(int num){
    if(num==1){
        return 1;
    }else{
        return num+sumaRecursiva(num-1);
    }
}

//sumaDirecta
int sumaDirecta(int num){
    return num*(num+1)/2;
}

/*int main(){
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;

    cout << "Suma Iterativa: " << sumaIterativa(num) << endl;
    cout << "Suma Recursiva: " << sumaRecursiva(num) << endl;
    cout << "Suma Directa: " << sumaDirecta(num) << endl;
    return 0;
}*/