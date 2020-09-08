#include <iostream>
using namespace std;
//AlbertTambalo

void ImprovedEulers(double x, double y, double stepp, double target){
    double k1, k2, ynp1 = 0;
    cout << " y(" << x << ") = " << y << endl;
    //cout << "k_1: ";
    k1 = -y;
    //cout << k1;
    //cout << " k_2: ";
    k2 = -(y+(stepp*k1));
    //cout << k2 << endl;
    ynp1 = y + stepp*((k1+k2)/2.0);
    if(x < target-stepp){
        ImprovedEulers((x+stepp),ynp1,stepp,target);
    } else {
        return;
    }
    return;
}

int main(){
    double tar;
    double step;
    cout << "-----IMPROVED EULERS METHOD-----" << endl;
    cout << "dy/dx = -y" << endl;
    cout << "Initial condition y(0) = 1" << endl;
    cout << "Estimate y of: ";
    cin >> tar;
    //cout << endl;
    cout << "Stepsize: ";
    cin >> step;
    //cout << endl;
    
    ImprovedEulers(0, 1, step, tar);
}


