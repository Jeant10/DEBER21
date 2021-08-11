#include <iostream>
#include <fstream>
using namespace std;

string nombrearchivo_uvas="uvas.txt";
void leerArchivo();

int main() {

  int TA,K;
  float GA,P;
  char TI;

  ofstream archivo_uvas;
  archivo_uvas.open(nombrearchivo_uvas.c_str(),ios::out);

  cout<<"Ingrese el tipo de uva: (A o B) "<<endl;
  cin>>TI;
  cout<<"Ingrese el tamaño de la uva: (1 o 2)"<<endl;
  cin>>TA;
  cout<<"Ingrese el precio de la uva: "<<endl;
  cin>>P;
  cout<<"Ingrese los kilos de uva: "<<endl;
  cin>>K;
  if(TI=='A'){
    if(TA==1){
      P=P+0.20;
    }
    else{
      P=P+0.30;
    }
  }else{
    if(TA==1){
      P=P-0.30;
    }
    else{
      P=P-0.50;
    }
  }

  GA=P*K;

  cout<<"La ganancia es: "<<GA<<endl;

  archivo_uvas<<"La ganancia es: "<<GA<<endl;

  archivo_uvas.close();

  return 0;
}
