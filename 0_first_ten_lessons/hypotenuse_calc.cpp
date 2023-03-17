#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x;
    double a;
    double b;
    double c;
    cout<<"what to find? 1-leg, 2-Hypotenuse: ";
    cin>>x;
    if (x==1){
        cout<<"Enter side A: ";
        cin>>a;
        cout<<"Enter Hypotenuse: ";
        cin>>c;
        b=sqrt(pow(c,2)-pow(a,2));
        cout<<"Leg is "<<b;
    }
    else{
        cout<<"Enter side A: ";
        cin>>a;
        cout << "Enter side B: ";
        cin >> b;
        c=sqrt(pow(a,2)+pow(b,2));
        cout << "Hypotenuse is " << c;
    }

    return 0;
}
