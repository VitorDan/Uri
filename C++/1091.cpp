#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef pair <int,int> line;

int main(){
    int cons,ox,oy,sair=1, controle =0;
    vector<line> vet_cord;
    line read;
    typedef pair <int,line>originpair;
    vector <originpair> origins;
    originpair ori;
    cin>>cons;
    while(cons != 0){
        cin>>ox>>oy;
        ori.first = cons;
        ori.second.first=ox;
        ori.second.second=oy;
        origins.push_back(ori);
        for(int i=0;i < cons;i++){
            cin>>read.first>>read.second;
            vet_cord.push_back(read);
        }
        cin>>cons;
    }
    int j =0;
    for(originpair i : origins){
        controle += i.first;
        for(;j<controle;j++){
            if(vet_cord[j].first == i.second.first && i.second.second < vet_cord[j].second < 10000){
                cout<<"divisa"<<endl;
            }// norte
            else if(vet_cord[j].first == i.second.first && i.second.second > vet_cord[j].second > -10000){
                cout<<"divisa"<<endl;
            } // sul
            else if(vet_cord[j].second == i.second.second && i.second.second < vet_cord[j].second < 10000 ){
                cout<<"divisa"<<endl;
            }// leste
            else if(vet_cord[j].second== i.second.second && i.second.second > vet_cord[j].first > -10000){
                cout<<"divisa"<<endl;
            }//oeste
            else{
                if(((-10000 <= vet_cord[j].first) && (vet_cord[j].first < i.second.first)) && ((vet_cord[j].second>i.second.second)&&(vet_cord[j].second<=10000))){
                    cout<<"NO"<<endl;
                } //NO
                else if(((vet_cord[j].first > i.second.first) && (vet_cord[j].first<= 10000)) && ((vet_cord[j].second>i.second.second)&&(vet_cord[j].second<=10000))){
                    cout<<"NE"<<endl;
                } //NE
                else if(((vet_cord[j].first < i.second.first) && (vet_cord[j].first >= -10000)) && ((vet_cord[j].second<i.second.second)&&(vet_cord[j].second>=-10000))){
                    cout<<"SO"<<endl;
                } //SE
                else if(((vet_cord[j].first > i.second.first) && (vet_cord[j].first<= 10000)) && ((vet_cord[j].second<i.second.second)&&(vet_cord[j].second>=-10000))) {
                    cout<<"SE"<<endl;                
            }
        }
        }
    }
    return 0;
}