#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout<<fixed;
    int a,b;
    cin>>a>>b;
    double res = (a * b);
    res /=12;
    cout<<setprecision(3)<<res<<endl;
    return 0;
}