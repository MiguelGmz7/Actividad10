#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<string> vec;
    char opc;
    while(true){
        system("cls");
        cout<<"a) Agregar al final"<<endl;
        cout<<"b) Mostrar"<<endl;
        cout<<"c) Inicializar"<<endl;
        cout<<"d) Frente"<<endl;
        cout<<"e) Ultimo"<<endl;
        cout<<"f) Ordenar"<<endl;
        cout<<"g) Insertar"<<endl;
        cout<<"h) Eliminar"<<endl;
        cout<<"i) Eliminar Ultimo"<<endl;
        cout<<"j) Salir"<<endl;
        cin>>opc;
            if (opc=='j'||opc=='J'){
                break;
            }
            else if(opc=='a'||opc=='A'){
            string num;

            cout << "Palabra: ";
            cin >> num; 

            vec.push_back(num);
            }
            
            else if(opc=='b'||opc=='B'){
            for(size_t i=0; i<vec.size(); i++)
                cout<<vec[i]<<" ";
                cout<<endl;
            system("pause");
            }
            
            else if(opc=='c'||opc=='C'){
            size_t n;
            string entero;

            cout<<"tam: ";
            cin>>n;
            cout<<"Palabra: ";
            cin>>entero;

            vec = vector<string>(n,entero);            
            }
            
            else if(opc=='d'||opc=='D'){
            if(vec.empty()){
                cout<<"Vector vacio"<<endl;
            }
            else{
                cout<<vec.front()<<endl;
            }
            system("pause");
            }
            
            else if(opc=='e'||opc=='E'){
            if(vec.empty()){
                cout<<"Vector vacio"<<endl;
            }
            else{
                cout<<vec.back()<<endl;
            }
            system("pause");
            }
            else if(opc=='f'||opc=='F'){
           // sort(vec.begin(),vec.end()); // de menor a mayor
            sort(vec.begin(),vec.end(),greater<string>()); //de mayor a menor la ultima linea se usa para definir como se ordena
            }
            
            else if(opc=='g'||opc=='G'){
            size_t p;
            string inu;

            cout<<"Posicion en el vector: ";
            cin>>p;
            cout<<"Palabra: ";
            cin>>inu;

            if(p>=vec.size()){
                cout<<"posicion no valida"<<endl;
            }
            else{
                vec.insert(vec.begin()+p,inu);
            }
            }
            
            else if(opc=='h'||opc=='H'){
            size_t po;
            cout<<"Posicion: ";
            cin>>po;

            if(po>=vec.size()){
                cout<<"Posicion no valida"<<endl;
            }
            else{
                vec.erase(vec.begin()+po);
            }
            }
            else if(opc=='i'||opc=='I'){
            if(vec.empty()){
                cout<<"Vector vacio"<<endl;
            }
            else{
                vec.pop_back();
            }
            }
            
    }
    return 0;
}