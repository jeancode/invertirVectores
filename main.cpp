#include <iostream>
#include <vector>
using namespace std;


namespace VectorTools{

    vector<int> reverse(vector<int> a){

        vector<int> r;

        for(int i = a.size()-1;i >= 0;i--){
            
            r.push_back(a[i]);

        }
        
        return r;
    }

    vector<int> removeItem(vector<int> a,int index){

        a.erase (a.begin()+index);

        return a;
    }

    int logV(vector<int> a){

        for(int i = 0; i <= a.size()-1;i++){
            cout<<a[i]<<"|";
        }
        cout<<""<<endl;
    }

}



int main(int argc, char const *argv[])
{
    vector<int> a;
    vector<int> b;

    a.push_back(1);
    a.push_back(12);
    a.push_back(12);
    a.push_back(14);
    a.push_back(33);

    VectorTools::logV(a);

    b = VectorTools::reverse(a);


    VectorTools::logV(b);

    //remove Item
    VectorTools::logV(VectorTools::removeItem(b,4));
    
    return 0;
}
