#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pwd;
    cout<<"Benvenuti nella nuova avventura testuale di labocca labs!\n";
    do{
        cout<<"    Premi 0 per iniziare una nuova partita o inserisci una password: ";
        cin>>pwd;
    }while(pwd!="0"&&pwd!="ERsA85");
    if(pwd=="0"){
        cout<<"\nIniziamo!\n";
        cout<<"\nHai sbloccato una password! ERsA85\n";
        cout<<"Se vuoi ricominciare in un secondo momento l'avventura da questo punto ti basta digitare questa sequenza di caratteri nel main menu\n\n";
        pwd="ERsA85";
    }
    if(pwd=="ERsA85"){
        cout<<"Exit";
    }
    return 0;
}
