#include <iostream>

using namespace std;

int main()
{
    int total,compradas,cont,atual;
    bool veri=false;
    cin>>total>>compradas;
    int vf[compradas];
    cont=0;

    for(int i=0;i<compradas;i++){
        cin>>atual;
        if(cont==0){
            vf[cont]=atual;
            cont++;
        }else{
            veri=false;
            for(int j=0;j<cont;j++){
                if (vf[j]==atual){
                    veri=true;
                    break;
                }

            }

            if(!veri){
                vf[cont]=atual;
                cont++;

            }

        }
    }
    cout<< total-cont<<endl;
    return 0;
}