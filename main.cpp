#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    {
        cout<<("Digite um número\n");
        cin>>(n);
        if (n%2==0)//Condição "É PAR"
        {
            cout<<"É PAR\n";
        }
        else//Condição do "if" acima
        {
            cout<<"Não é PAR\n";
        }
        if (n%2!=0)//Condição "É IMPAR"
        {
            cout<<"É IMPAR\n";
        }
        else//Condição do"if" acima
        {
            cout<<"Não é IMPAR\n";
        }
        if (n>10)//Condição "Maior que 10"
        {
            cout<<"É maior que 10\n";
        }
        else//Condição do "if" acima
        {
            cout<<"Não é maior que 10\n";
        }
        cout<<"Valor dobrado do valor "<<n<<" é: "<<(n*2)<<"\n";
        if (n%n==1 && n%1==n)
        {
            cout<<"É PRIMO\n";
        }
        else
        {
            cout<<"Não é PRIMO\n";
        }
    }
}
