#include <iostream>
#include <vector>
#include <string>
using namespace std;


//se agega compativilidad con  -std=c++14
//atributo resivido es variable con una misma funcion gracias

namespace VectorTools{

    //invierte un vector de  string
    vector<string> reverse_string(vector<string> a){

        
        vector<string> r;

        
        for(int i = a.size()-1;i >= 0;i--){
            
            r.push_back(a[i]);

        }
        
        return r;
    }
    //invierte un vector numerico
    vector<int> reverse_int(vector<auto> a){

        
        vector<int> r;

        
        for(int i = a.size()-1;i >= 0;i--){
            
            r.push_back(a[i]);

        }
        
        return r;
    }
    

    //elimina un item del vector  con index 
    vector<int> removeItem(vector<auto> a,int index){

        a.erase (a.begin()+index);

        return a;
    }

    //Convierte un vector de enteros a string   
    string encodeString(vector<int> a){

        string b;
        
        for(int  i = 0; i <= a.size()-1;i++){
            string  c  = to_string(a[i]);
            b += c;
        }

        return b;
    }
 
    //imiprime un vector con una separacion con un caracter
    int logV(vector<auto> a){

        for(int i = 0; i <= a.size()-1;i++){
            cout<<a[i]<<"|";
        }
        cout<<""<<endl;
    }

}



int main(int argc, char const *argv[])
{

    vector<string> palabra;

    palabra.push_back("hola");
    palabra.push_back("adios");

    VectorTools::logV(palabra);

    palabra = VectorTools::reverse_string(palabra);

    VectorTools::logV(palabra);

    cout<<VectorTools::encodeString(palabra)<<endl;
    

    vector<int> a;
    vector<int> b;

    a.push_back(1);
    a.push_back(12);
    a.push_back(12);
    a.push_back(14);
    a.push_back(33);

    VectorTools::logV(a);

    b = VectorTools::reverse_int(a);


    VectorTools::logV(b);

    //remove Item
    VectorTools::logV(VectorTools::removeItem(b,4));

    
    
    return 0;
}
