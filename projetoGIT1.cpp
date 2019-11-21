#include <iostream>
#include <string>
using namespace std;


/*
	Conta todas as letras 'letra' contidas em 'texto'
*/
int contaLetras(char letra, string texto)
{
	int qtd, i, let=0;
	qtd=texto.length();
	for (i=0; i<qtd; i++)
	{
		if(texto[i]==letra)
			let++;
	}
	return let;
}

/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/
void substituirLetra(char letra1,char letra2, string texto)
{
    qtd=texto.length();
	for (i=0; i<qtd; i++)
	{
	    if(texto[i]==letra1)
            texto[i]=letra2;
	}
}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
	size_t pos=texto.find(palavra);
	int contador=0;
	while(pos!=string::npos)
	{
		contador++;
		texto=texto.substr(pos+1);
		pos=texto.find(palavra);

	}
	return contador;
}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
string substituirPalavras(string palavra1, string palavra2, string texto)
{
	size_t pos=texto.find(palavra1);
	while(pos!=string::npos)
	{
		texto.replace(pos,palavra1.length(),palavra2);
		pos=texto.find(palavra1);
	}
	return texto;

}

int main()
{
    string texto, palavra, palavra1, palavra2;
    char letra1, letra2, letra3;
    int qtd, qtdp;
    cout << "Entre com o texto para fazer o teste: ";
    getline(cin, texto);
    cout<<"Digite a letra: ";
    cin.get (letra1);
    qtd=contaLetras (letra1, texto);
    cout<<"Quantidade de vezes que "<<letra1<<" aparece no texto: "<<qtd;
    cout<<"Digite outra letra: ";
    cin.get (letra2);
    cout<<"Digite uma outra letra: ";
    cin.get (letra3);
    substituirLetra (letra2, letra3);
    cout<<"Digite uma palavra: ";
    getline(cin, palavra);
    qtdp=contaPalavras (palavra, texto);
    cout<<"Quantidade de vezes que "<<palavra<<" aparece no texto: "<<qtdp;
    cout<<"Digite uma palavra: ";
    getline(cin, palavra1);
    cout<<"Digite uma outra palavra: ";
    getline(cin, palavra2);
    tex=substituirPalavras(palavra1, palavra2, texto);
    cout<<tex;
	return 0;
}
