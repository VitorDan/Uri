#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void factores(long long n,vector<int> &sets){
    int i =2;
    int raiz = sqrt(n);
    while(n > 1 && i < raiz){
        if((n%i) == 0){
            sets.push_back(i);
            while( n%i ==0){
                n/=i;
            }
        }
        i++;
    }
    if(i==raiz && n != 1){
        sets.push_back(n);
    }
}

int fatorial(unsigned int n,unsigned int p){
    int fact=1;
    if(n==0){
        while(p>0){
            fact*=p--;
        }
        return fact;
    }else{
        while(n>0 && n!=p){
            fact *=n--;
        }
        return fact;
    }
}

int despo(int n){
    int cont = 0,aux=1;
    for(int i=2;i<n;i++){
        aux =1;
        int fator = fatorial(n,(n-i));
        cont += fator/fatorial(0,i);
    }
    return cont + 1;
}

int main(){
    vector <int> sets;
    long long n;
    int resp = 0;
    cin>>n;
    factores(n,sets);
    if(sets.size()>1){
        resp = despo(sets.size());
    }else{
        resp =0;
    }
    cout<<resp<<endl;
    return 0;
}