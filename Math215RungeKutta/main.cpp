#include <iostream>
using namespace std;
//AlbertTambalo

void RuKu(double x, double y, double stepp, double target){
    double k1, k2, k3, k4, ynp1 = 0;
    cout << " y(" << x << ") = " << y << endl;
    k1 = stepp*(-y);
    k2 = stepp*(-(y+(k1/2)));
    k3 = stepp*(-(y+(k2/2)));
    k4 = stepp*(-(y+(k3)));
    ynp1 = y + (k1+2*k2+2*k3+k4)/6;
    if(x < target-stepp){
        RuKu((x+stepp),ynp1,stepp,target);
    } else {
        return;
    }
    return;
}

int main(){
    double tar;
    double step;
    cout << "-----RUNGE KUTTA METHOD-----" << endl;
    cout << "dy/dx = -y" << endl;
    cout << "Initial condition y(0) = 1" << endl;
    cout << "Estimate y of: ";
    cin >> tar;
    //cout << endl;
    cout << "Stepsize: ";
    cin >> step;
    //cout << endl;
    
    RuKu(0, 1, step, tar);
}