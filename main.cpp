#include <iostream>
using namespace std;
float calcolaArea (float r1){
    float A1;
    A1=3.14*r1*r1;
    return A1;
    }
    float calcolcolaCirc (float r1){
        float C1;
        C1=2*3.14*r1;
        return C1;
   
int main() {
    float r1,r2,A1,A2,C1,C2;
    cout<<"quali sono i raggi delle due circonferenze"<<endl;
    cin>>r1;
    cin>>r2;
    A1=calcolaArea(r1);
    A2=calcolaArea(r2);
    cout<<"l'area 1 è"<<A1<<endl;
    cout<<"l'area 2 è"<<A2<<endl;
    C1=calcolaCirc(r1);
    C2=calcolaCirc(r2);
    cout<<"la circonferenza 1 è"<<C1<<endl;
    cout<<"la circonferenza 2 è"<<C2<<endl;
    }
    return 0;

    


