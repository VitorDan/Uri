#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
    cout<<fixed;
    double x1,y1,x2,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    double total = sqrt(( pow((x2-x1),2)+ pow((y2-y1),2)));
    cout<<setprecision(4)<<total<<endl;
    return 0;
}