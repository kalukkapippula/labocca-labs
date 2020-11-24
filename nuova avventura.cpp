/*#include <iostream>
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
}*/
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int x=0, y=0; //Varibili per il controllo dei cicli
	int citta=1, Ccitta=1, zona=1; //Variabili per il controllo nelle città
	int regione=1, Cregione=1; //Varibili per il controllo delle regioni
	int bar=1, Cbar=1; //Variabili per il controllo dei bar
	while(y==0){
	cout<<"Ti trovi nella città A. Cosa vuoi fare?"<<endl<<"1. Fai un giro per la città"<<endl<<"2. Muoviti per la regione"<<endl;
	cin>>x;
	while(x!=1&&x!=2){
		cout<<endl<<"Inserisci un numero valido: ";
		cin>>x;
	}if(x==1){
		Ccitta=0;
	}else{
		Cregione=0;
	}
	while(Ccitta==0){
			switch(citta){
				case 1:
					cout<<endl<<"Ti trovi alle porte della città, cosa vuoi fare?"<<endl<<"1. Vai al bar"<<endl<<"2. Esci dalla città"<<endl;
					cin>>x;
					while(x!=1&&x!=2){
		                cout<<endl<<"Inserisci un numero valido: ";
		                cin>>x;
	                }
	                if(x==1){
	                	citta=2;
					}else{
						Ccitta=1;
						Cregione=0;
					}
				break;
				case 2:
					cout<<endl<<"Ti trovi davanti al bar, cosa vuoi fare?"<<endl<<"1. Entra nel bar"<<endl<<"2. Vai alle porte della città";
					cin>>x;
					while(x!=1&&x!=2){
		                cout<<endl<<"Inserisci un numero valido: ";
		                cin>>x;
	                }
	                if(x==1){
	                	Cbar=0;
	                	while (Cbar==0){
	                	    switch(bar){
	                		    case 1:
	                			    cout<<endl<<"Ti trovi nell'atrio del bar, cosa vuoi fare?"<<endl<<"1. Esci dal bar"<<endl<<"2. Siediti al bancone"<<endl;
	                			    cin>>x;
	                			    while(x!=1&&x!=2){
		                                cout<<endl<<"Inserisci un numero valido: ";
		                                cin>>x;
	                                }
	                                if(x==1){
	                                	Cbar=1;
									}else{
										bar=2;
									}
								break;
								case 2:
									cout<<endl<<"Parli con il barista, bo è una verione di prova non ho voglia di scrivere"<<endl;
									bar=1;
								break;
						    }
					    }
					}else if(x==2){
						Cbar=1;
						citta=1;
					}
	                
			}
		}
	while(Cregione==0){
		switch(zona){
			case 1:
				cout<<"Ti trovi nella regione 1"<<endl<<"Verso che regione vuoi muoverti?"<<endl;
				cout<<"1. Regione 2"<<endl<<"2. Regione 4"<<endl;
				cin>>zona;
				while(zona!=1&&zona!=2){
					cout<<"Inserisci una Regione valida ";
					cin>>zona;
				}
			break;
			case 2:
				cout<<"Ti trovi nella Regione 2"<<endl<<"Verso che Regione vuoi muoverti?"<<endl;
				cout<<"1. Regione 1"<<endl<<"2. Regione 3"<<endl<<"3. Regione 5"<<endl;
				cin>>zona;
				while(zona!=1&&zona!=2&&zona!=3){
					cout<<"Inserisci una Regione valida: ";
					cin>>zona;
				}
			break;
			case 3:
				cout<<"Ti trovi nella Regione 3"<<endl<<"Verso che Regione vuoi muoverti?"<<endl;
				cout<<"1. Regione 2"<<endl<<"2. Regione 6"<<endl;
				cin>>zona;
				while(zona!=1&&zona!=2){
					cout<<"Inserisci una Regione valida: ";
					cin>>zona;
				}
			break;
			case 4:
				cout<<"Ti trovi nella Regione 4"<<endl<<"Verso che Regione vuoi muoverti?"<<endl;
				cout<<"1. Regione 1"<<endl<<"2. Regione 5"<<endl;
				cin>>zona;
				while(zona!=1&&zona!=2){
					cout<<"Inserisci una Regione valida: ";
					cin>>zona;
				}
			break;
			case 5:
				cout<<"Ti trovi nella Regione 5"<<endl<<"Verso che Regione vuoi muoverti?"<<endl;
				cout<<"1. Regione 4"<<endl<<"2. Regione 6"<<endl<<"3. Regione 2"<<endl;
				cin>>zona;
				while(zona!=1&&zona!=2&&zona!=3){
					cout<<"Inserisci una Regione valida: ";
					cin>>zona;
				}
			break;
			case 6:
				cout<<"Ti trovi nella Regione 6"<<endl<<"Verso che Regione vuoi muoverti?"<<endl;
				cout<<"1. Regione 3"<<endl<<"2. Regione 5"<endl;
				cin>>zona;
				while(zona!=1&&zona!=2){
					cout<<"Inserisci una Regione valida: ";
					cin>>zona;
				}
			break;
		}
	}
	
}
}
