#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

struct produtos{
    int codigo;
    float preco;
    string nome,liberacao,situacao;
};

void escrever(string nomeArq, produtos lista[]){
 ifstream file(nomeArq);
  string linha;
    int n =0;
  while (getline(file, linha)) {
    stringstream lineStream(linha);
    string cell;


    getline(lineStream, cell, ';');
    istringstream(cell) >> lista[n].codigo;

    getline(lineStream, cell, ';');
    istringstream(cell) >> lista[n].preco;

    getline(lineStream, cell, ';');
    lista[n].nome = cell;

    getline(lineStream, cell, ';');
    lista[n].liberacao = cell;

    getline(lineStream, cell);
    lista[n].situacao = cell;
    n++;
}
}

int main(){
produtos *lista = new produtos[1000];
string arqcsv = "base.csv";
//ofstream saida(arqbin, ios::binary);
escrever(arqcsv,lista);
cout<<lista[300].codigo<<" "<<lista[300].preco<<" "<<lista[300].nome<<" "<<lista[300].situacao<<" "<<lista[300].liberacao;
return 0;



}