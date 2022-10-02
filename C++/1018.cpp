#include <iostream>
using namespace std;
int main(){
    int val;
    int resto=0;
    cin>>val;
    cout<<val<<endl;
    if(val >= 100){
        resto = val /100;
        val -= (resto * 100);
        cout<<resto<<" nota(s) de R$ 100,00"<<endl;   
    }else{
        cout<<0<<" nota(s) de R$ 100,00"<<endl;   
    }
    if(val >= 50 ){
        resto = val /50;
        val -= (resto *50);
        cout<<resto<<" nota(s) de R$ 50,00"<<endl;   
    }else{
         cout<<0<<" nota(s) de R$ 50,00"<<endl; 
    }

    if(val >=20){
        resto = val / 20;
        val -= (resto * 20);
         cout<<resto<<" nota(s) de R$ 20,00"<<endl; 
    }else{
         cout<<0<<" nota(s) de R$ 20,00"<<endl; 
    }

    if(val > 10){
        resto = val / 10;
        val -= (resto * 10);
         cout<<resto<<" nota(s) de R$ 10,00"<<endl;   
    }else{
         cout<<0<<" nota(s) de R$ 10,00"<<endl; 
    }

    if(val >= 5 ){
        resto = val / 5;
        val -= (resto * 5);
         cout<<resto<<" nota(s) de R$ 5,00"<<endl;  
    }else{
        cout<<0<<" nota(s) de R$ 5,00"<<endl; 
    }

    if(val >=2 ){
        resto = val / 2;
        val -= (resto * 2);
         cout<<resto<<" nota(s) de R$ 2,00"<<endl;     
    }else{
         cout<<0<<" nota(s) de R$ 2,00"<<endl; 
    }

    if(val >= 1){
        resto = val / 1;
        val -= (resto * 1);
         cout<<resto<<" nota(s) de R$ 1,00"<<endl;   
    }else{
         cout<<0<<" nota(s) de R$ 1,00"<<endl; 
    }
    return 0;
}