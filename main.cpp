#include <iostream>
#include "func.h"

using namespace std;

int main()
{
    /*
    vector<string>c[2];
    c[0].push_back("Alunos");
    c[0].push_back("3");
    c[0].push_back("ssi");
    c[0].push_back("Nome");
    c[0].push_back("Matricula");
    c[0].push_back("Idade");
    c[1].push_back("Carro");
    c[1].push_back("3");
    c[1].push_back("ssf");
    c[1].push_back("Nome");
    c[1].push_back("Marca");
    c[1].push_back("Preco");
    CRIAR_DATABASE("TESTE",c,2);
    //*/
    //parte concluida


    /*
    node ax;
    MEM_REGISTER R;
    DATABASE db;
    R.nome="Alunos";
    ax.info=new string;
    ax.nome="Nome";
    *cstring(ax.info)="Diego";
    R.vars.push_back(ax);
    ax.info=new string;
    ax.nome="Matricula";
    *cstring(ax.info)="321654987";
    R.vars.push_back(ax);
    ax.info = new int;
    ax.nome = "Idade";
    *cint(ax.info) = 24;
    R.vars.push_back(ax);

    db.NOME="TESTE";
    INSERIR_REGISTRO(&db, R);


    //*/


    //*
    DATABASE db;
    string s[3];
    void *p=nullptr;
    db.NOME="TESTE";
    s[0]="Alunos";
    s[1]="*";
    vector<MEM_REGISTER> v=PEGAR_REGISTRO(&db, s, &p);
    IMPRIMIR_MR(&v, *cstring(p));
    delete cstring(p);
    return 0;
    //*/
}
