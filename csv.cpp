#include <iostream>
#include <fstream>

using namespace std;

struct produtos{
    int codigo;
    float preco;
    string nome,liberacao,situacao;
};

void escrever(string nomeArq, produtos lista[]){
ifstream arquivo(nomeArq);
bool valido;
valido = false;
int n=0;
const char *mascara = "%d,%f,%[^,],%[^,],%[^,]";
string linha{};
produtos teste;
getline(arquivo,linha);
while(arquivo.good()){
    
    
    cout<< "Leu: " << linha << endl;
    scanf(linha.c_str(),&teste.codigo,&teste.preco,&teste.nome,&teste.liberacao,&teste.situacao);
    getline(arquivo,linha);
    
    n+=1;
}
arquivo.close();
}

int main(){
produtos *lista = new produtos[1000];
string arqcsv = "base.csv";
//ofstream saida(arqbin, ios::binary);
escrever(arqcsv,lista);
cout<<lista[300].codigo<<" "<<lista[300].preco<<" "<<lista[300].nome<<" "<<lista[300].situacao<<" "<<lista[300].liberacao;
return 0;



}