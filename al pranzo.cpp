#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    unsigned x;
    int min, y=0;
    int Pvita=25, Pscelta, Pdanno, Pparata, Pvitaplus;
    int Cvita=25, Cdanno;
    int controllo, conteggio=0;
    cout<<" labocca labs presenta\n AL PRANZO - avventura testuale\n Leggi attentamente, segui le indicazioni e rispondi alle varie scelte per plasmare la tua storia unica! \n";
    while(y==0){
	
    do{
        cout<<"\nOggi a pranzo hai davvero fame, ma sei a casa da solo e devi prepararti da mangiare. Il tempo che hai a disposizione e' poco, quindi puoi cucinare una sola portata. Cosa scegli di cucinare? \nDigita 0 se vuoi cucinare un primo o 1 se vuoi cucinare un secondo:  ";
        cin>>x;
    }while(x>1);
    if(x==0){
        do{
            cout<<"\nHai scelto di cucinarti un primo! Apri la dispensa e noti un pacco di riso e uno di spaghetti. Quale scegli di cucinare? \nDigita 0 se vuoi cucinare il riso o 1 se vuoi cucinare gli spaghetti:  ";
            cin>>x;
        }while(x>1);
        if(x==0){
            do{
                cout<<"\nVedi due pacchetti nel luogo dove dovrebbe trovarsi il riso. Prendi quello di destra o quello di sinistra? \nDigita 0 per prendere quello di destra o 1 per prendere quello di sinistra: ";
                cin>>x;
            }while(x>1);
            if(x==0){
                cout<<"\nPrendi il pacchetto di destra, metti il riso a cuocere. \nQuanti cucchiai di zafferano aggiungi? ";
                cin>>min;
                if(min<=2&&min>=1){
                cout<<"\nLo zaffer/ano non sapeva minimamente da culo! Punteggio 8/10";
            }
            else if(min>=3){
                cout<<"\nHai messo così tanto zaferano che hai dovuto fare un mutuo. E non era nemmeno un granche'. Punteggio 3/10";
            }
            else if(min<=-1){
                cout<<"\nIl supermercato ti da soldi per ogni bustina che porti via. Mangi e scopri che era tutto scaduto. Punteggio 3.7/10";
            }
            else{
			cout<<"\nL'assenza di zafferano non copre il saporaccio del riso! Punteggio 2/10";
			}
        }else{
        	cout<<"\n Prendi la confezione di sinistra. Cacchio e' il riso che sembra farina che si mangia con il naso. Cosa?! La padella ti sfida ad una battiglia rap. \nDigita 0 per iniziare o 1 per sentire cos'ha da dire la padella: ";
        	cin>>x;
        	if(x==1){
        		cout<< "\nOra dirigo io questa canzone \nSe non vuoi che ti frigga giù da un burrone \nCucinate in groppa ad un cavallo marrone... \nVolete che spiego io come si fa l'attore \nSenza metriche ne freestyle siamo in mezzo a un casino... \nSul sofa' o sul divano sembri un spibambino...";
        		cout<<"\nLa distruggi. Letteralmente. Punteggio 5/10";
			}else{
				cout<< "\nOk arpeggio a razzo con lo stile che ti sfonda \nFaccio opere d'arte come da Vinci e la Gioconda \nTi ammazzo con lo stile improvvisato non vali neanche la mia ombra \nNicki Minaj ha visto il mio cazzo e poi ha scritto anaconda";
				cout<< "\n\nBel pezzo, ma la padella si mette a ridere..., non promette bene...";
				cout<< "\n\nOk tu arpeggi a razzo ma non hai capito un cazzo, \nMa a me le rime me escono tipo ruzzle. \nAh adesso te lo dico, amico, \nTu c'hai er cazzo come n'anaconda ma e' più lungo il mio dito. \nDici di fare opere come da Vinci e la Gioconda, il mio rap ti sfonda, \nMa fai schifo quindi zitto e famme na pompa.";
				cout<< "\n\nNon trovi le parole per rispondere. Passano 40 secondi. Hai perso contro una battaglia rap contro una padella. Non conta niente che tu fossi fatto. Punteggio 0/10";
			}
		}
        
            
        }else{
                cout<<"\nPrendi gli spaghetti e li getti nell'acqua che sta bollendo. Decidi di impostare un timer per capire quando scolare l'acqua. \nPer quanti minuti imposti il timer?:  ";
                cin>>min;
            if(min<=7&&min>=0){
                cout<<"\nHai scolato troppo presto. La pasta e' cruda! Punteggio 2/10";
            }
            else if(min>=15){
                cout<<"\nIl timer suona e scoli la pasta. La pasta e' completamente scotta, quasi immangiabile! Punteggio 3/10";}
            else if(min<=-1){
                cout<<"\nHai scoperto il viaggio nel tempo, ricevi un premio nobel. 100/10";
            }
            else{cout<<"\nOttimo Lavoro! La pasta e' fantastica! Punteggio 8/10";}
        }
        
    }else{
	
        do{
            cout<<"\nHai scelto di cucinarti un secondo! Apri il frigo e noti delle fettine di pollo, mentre nella dispensa ci sono tre patate. Cosa scegli di cucinarti? \nDigita 0 se vuoi cucinarti le fettine di pollo o 1 se vuoi cucinarti le patate:  ";
            cin>>x;
        }while(x>1);
        if(x==0){
            do{
                cout<<"\nHai scelto di cucinarti delle fettine di pollo. Versi un po' di olio nella padella e ci fai cucinare le fettine sopra. Dopo circa cinque minuti squilla il telefono nella stanza al piano di sopra. Vai a rispondere? \nDigita 0 se vai a rispondere o 1 se non ci vai:  ";
                cin>>x;
            }while(x>1);
             if(x==0){
                do{
                    cout<<" \nVai a rispondere al telefono. E' un dannato call center. Come scegli di insultarlo? \nDigita 0 per un insulto classico, 1 per fingerti un altro call center o 2 per recitare una poesia futurista: " ;
                    cin >> x;
                }while(x>2);
                        if (x==0){
	                        cout<< "\nInsulti così tanto il povero lavoratore che mette giu' lui la chiamata. Hai perso troppo tempo e le fettine di pollo si sono bruciate! Punteggio 3/10";
                        }else if(x==1){
	                        cout<<"\nLa tua imitazione e' terribile, ma ottieni il numero della tipa che ti ha chimato (346 6***5**). Vi mettete insieme, vi sposate, comprate un po' di cose, vi trasferite in Florida e un uragano vi distrugge la casa. In tutto questo non hai ancora spento i fornelli. Punteggio 0/10";
                        }else{
	                        cout<< "\nInizi a recitare una poesia di Marinetti, ma appena finisci l'uomo dall'altra parte della cornetta ti risponde Heil Hydra!. Poco dopo degli uomini vestiti di nero ti suonano alla porta... . Però le fettine di pollo erano perfette. Punteggio 11/10  ";
                        }
            }
            else{
                do{
    	cout<<"\nHai Quasi finito di preparare le fettine di pollo quando suona il campanello. Apri la porta e vedi un uomo con un'aspirapovere Folletto in mano. Non sembra averti visto, quindi ti giri e torni e in cucina. Poco dopo senti una finesrta rompersi, e il suono di un'aspirapolvere che si accende. Non c'è tempo! Devi trovare qualcosa con cui difenderti! \nDigita 0 per prendere un coltello da cucina o 1 per prendere un lanciafiamme: ";
    	cin>>x;
    }while(x>1);
    if(x==0){
			cout<< "\nSegui il suono dell'aspirapolevere e dopo pochi passi trovi il venditore davanti a te. Che il combattiemnto abbia inizio!\n ";
  
    while(Pvita>0&&Cvita>0){
  	if(conteggio==3){
  		cout<<endl <<"Vita giocatore: " <<Pvita <<endl;
        cout<<"Vita Venditore: " <<Cvita <<endl;
        conteggio=0;
	  }
  	cout<<endl << "1. Attacca (Mi sembra abbastanza esplicito)"<<endl <<"2. Proteggiti (Se pari l'attacco recuperi dei punti vita)" <<endl;
  	cin>> Pscelta;
  	while (Pscelta!=1&&Pscelta!=2){
  	    cout<<"Inserisci un numero valido: ";
  	    cin>>Pscelta;
  	}
  	Pdanno = rand() % 5+1;
    Cdanno = rand() % 5+1;
  	switch(Pscelta){
	  case 1 :
	  	controllo=0;
  		cout<<"Hai attaccato il Venditore!" <<endl;
  		Cvita-=Pdanno;
  		if(Cvita<=15){
  			cout<<endl <<"Il venditore non sembra messo bene..."<< endl;
		  }else if(Cvita<=5){
		  	cout<<endl <<"Il venditore potrebbe essere steso da una folata di vento..." <<endl;
		  }
	    break;
  	  case 2 :
  	  	controllo=1;
  	  	Pparata = rand() % 30;
  	  	Pvitaplus = rand() % 5+1;
  	  	cout<<"Provi a parare l'attacco!"<<endl;
  	  	if(Pvita>Pvita/2){
  	  		if(Pparata>=20){
  	  			cout<<"Hai parato l'attacco."<<endl;
  	  			Pvita+=Pvitaplus;
				}else{
					cout<<"Non hai parato l'attacco."<<endl;
					Pvita-=Cdanno+2;
				}
			}else if(Pvita>Pvita/3){
				if(Pparata>=15){
					cout<<"Hai parato l'attacco."<<endl;
					Pvita+=Pvitaplus;
				}else{
					cout<<"Non hai parato l'attacco."<<endl;
					Pvita-=Cdanno+2;
			    }
			}else{
				if(Pparata>=10){
					cout<<"Hai parato l'attacco."<<endl;
					Pvita+=Pvitaplus;
			    }else{
				cout<<"Non hai parato l'attacco."<<endl;
				Pvita-=Cdanno+2;
			    }
		
		    }
		    if(Pvita>25){
		    	Pvita=25;
		    }
			break;
            }
    if(controllo==0){
    	cout<<endl <<"Il venditore ti attacca!"<<endl;
    	Pvita-=Cdanno;
	}
    if(Pvita<=15){
  			cout<< "Non sembri messo bene..." << endl;
		  }else if(Pvita<=5){
		  	cout<<endl <<"Potresti essere steso da una folata di vento..." <<endl;
		  }
    conteggio++;
    }
    if(Pvita<=0){
    	cout<<"\nHai perso il combattiemento... Quando ti risvegli trovi di fianco a te l'aspirapolvere deformata del venditore e un biglietto con scritto: La gilda dei venditori porta a porta vince ancora. Punteggio 4/10";
	}else{
		cout<<"\nHai sconfitto il venditore, e le fettine di pollo sono buonissime! Punteggio 10/10";
	}
	    }else if(x==1){
			do{
				cout<<"\nUn lanciafiamme? Seriamente? Dove pensi di essere, in un film russo non molto realistico sulla 2° Guerra Mondiale? Ok, cercando nello sgabuzzino trovi trovi un deodorante e un accendino. Vuoi affrontare il venditore ambulante testa a testa o provi a tendergli un'imboscata? \nDigita 0 per affronrarlo testa a testa o 1 per tendergli un'imboscata: ";
				cin>>x;
			}while(x>1);
			if(x==0){
				cout<<"\nArmato del tuo deodorante e accendino, ti avvicini al venditore e... Forse avresti dovuto controllare che il deodorante evesse ancora un po' di deodorante all'interno. Il lavoratore scontento ti picchia, svieni e al tuo risvelgio scopri che mancono 60 euro nel portafogli e che qualcuno ha mangiato le fettine di pollo. Punteggio 3/10 ";
			}else{
				do{
					cout<<"\nDecicdi di tendergli un'imboscata. Vuoi appostarti sotto le scale o dietro ad una porta? \nDigita 0 per appostarti sotto le scale o 1 per appostarti dietro ad una porta: ";
					cin>>x;
				}while(x>1);
				if(x==0){
					cout<<"\nDopo circa 3 ora di paziente attesa, ricevi un messaggio dalla tua vicina: \"Scusa x sbaglio ho rotto il vetro della tua finestra. xke nn vieni fuori da sotto le scale ke ne parliamo?\" Punteggio cincue/10"; 
				}else{
					cout<<"\nStai per metterti dietro ad una porta quando quasta viene aperta con violenza, ti viene sbattuta addosso e svieni. Ti risvegli con una botta molto visibile sulla faccia, e con le fettine di pollo rubate. Punteggio 1/10";
				}
			}
		}
        }
        }else{
            do{
                cout<<"\nHai scelto di cucinarti delle patate. Prendi la prima patata e prendi il pela-patate. Come fai il primo taglio con l'utensile? \nDigita 0 per tagliare in orizzontale o 1 per farlo in verticale:  ";
                cin>>x;
            }while(x>1);
            if(x==0){
			    do{
				    cout<<"\nIl primo taglio lo fai in orrizzontale e, dopo aver inciso la patata, scivoli e ti procuri un taglio su un dito. La ferita perde molto sangue e sei costretto a recarti al pronto soccorso! \nDigita 0 per andare in macchina o 1 per chiamare un ambulanza:  ";
				    cin>> x;
			    }while(x>1);
				if(x==0){
					do{
						cout<<"\nOh no! Hai mancato la svolta per l'ospedale e devi tornare indietro. \nTra quanti metri vuoi girare in retromarcia?: ";
						cin>> min;
						if(min<=20&&min>=0){
                            cout<<"\nHai svoltato troppo presto. Ora ti becchi anche una multa per blocco stradale! Punteggio 4/10";
                        }else if(min>=25){
                            cout<<"\nTi accorgi troppo tardi che hai sorpassato di nuovo la svolta. Vai a sbattere contro un albero. Punteggio 3/10";
			            }else if(min<=-1){
                            cout<<"\nHai scoperto un fenomeno fisico sconosciuto, ma non sei in grado di spiegarlo al prof. Punteggio 2/10, e vuole parlare con i tuoi genitori";
                        }else{
			                cout<<"\nOttimo Lavoro! Impressioni un paio di bambini con questo drift. Punteggio 8/10";
			            }
					}while(x>1);
				}else{
					cout<< "\nL'ambulanza trova traffico e arriva troppo tardi. Però sapessi che risate si sono fatte i medici leggendo le tue cause di morte. 6/10";
				}
        }else{
			cout<<"\nIl primo taglio lo fai in modo corretto, ovvero in verticale. Peli tutte le patate e metti da parte tutti i frammenti di scorza, che decidi di buttare subito nell'umido perchè sei un amante della raccolta differenziata.\n";
			do{cout<<"Togli il coperchio al bidone, da cui improvvisamente fuoriescono due esseri viventi fatti con i rifiuti organici che da più di tre mesi marciscono nel tuo bidone. Costava tanto andare a buttare via l'umido? Digita 0 se vuoi attaccare fisicamente i due esseri o 1 se vuoi provare a stabilire un contatto verbale con loro:  ";
			cin>>x;}while(x>1);
			if(x==0){
			    do{cout<<"\nCon l'agilità che contraddistinguono tutti i film d'azione, afferi la scopa che tieni in cucina e la punti in direzione dei due esseri come se dovessero avere paura di te. Illuso.\n";
			    cout<<"Digita 0 se vuoi correre contro gli essere per attaccarli per primo, 1 se vuoi metterti sulla difensiva e aspettare un loro attacco o 2 se vuoi lanciare loro addosso la scopa:  ";
			    cin>>x;}while(x>2);
			    if(x==0){
			        cout<<"\nImpugni la scopa come una spada e punti l'essere estraneo formato da salsicce scadute. Tiri un grosso sospiro, poi inizi a correre pronto a sferrargli un attacco, ma a metà della tua rincorsa scivoli sull'altro essere formato da una buccia di banana e cadi inesorabilmente a terra sbattendo la testa.\n";
			        cout<<"Sdraiato a terra, con gli occhi semichiusi dal dolore, riesci ad intravedere i due esseri prenderti in giro per il tuo attacco, arrampicarsi sui fornelli e mangiare le tue patate che avevi accuratamente sbucciato. Punteggio 3/10";
			    }else if(x==1){
			        cout<<"\n Indietreggi usando la spada come scudo. Il primo essere ti attacca provando a saltarti addosso, ma riesci a schiavrlo e a sferrare un contrattacco colpendolo come se la scopa fosse una mazza da baseball e facendolo schiantare sulla parete.\n";
			        cout<<"Ora il secondo essere ha paura di te, perciò ti avvicini cautamente e con le setole della scopa lo spappoli a terra con una violenza esagerata e inopportuna.\n";
			        cout<<"Hai ucciso senza problemi i due esseri estranei, ti senti un vero guerriero. Soddisfatto del tuo lavoro, siedi a tavola e ti gusti le tue patate. Punteggio 7/10, ma hai tutta la cucina da ripulire.";
			    }else{
			        cout<<"Lanci la scopa contro i due esseri come se fosse una pokeball, mettendoci tutta la precisione acquisita durante la tua vita. Manchi clamorosamente esntrambi gli avversari e riesci pure a rompere un vaso preziosissimo che ti aveva regalato tua mamma.\n";
			        cout<<"Gli esseri estrenai non prendono bene questo tentativo di ucciderli e ti mettono alle spalle al muro avanzando con aria minacciosa. Provi a stabilire un contatto verbale pacifico, ma è troppo tardi per scegliere questa opzione. Effetto farfalla, Bitch!\n";
			        cout<<"I due esseri estranei si vendicano di tutti i mesi in cui tu hai rinchiuso loro, mettendoti a testa in giù dentro il bidone dell'umido. Unica consolazione, buttano nel bidone anche le patate che hai sbucciato. Punteggio 5/10";}
			    }
			else{
			    cout<<"\nSentendoti un po' stupido, ti avvicini agli esseri estranei e inizi a parlare loro in tono cordiale: \n-Buongiorno signori, come posso esservi utile? Qual buon vento vi ha portato nella mia cucina?\n";
			    cout<<"-Appena hai aperto il bidone siamo usciti per chiederti aiuto. Il malvagio essere formato da yogurt scaduto sta imponendo la sua tirannia all'interno del bidone. Noi siamo gli ambasciatori del regno che vogliono ristabilire la pace, per questo siamo venuti a contattarti.\n";
			    cout<<"-Ma tutto questo è nuovo per me. Io non immaginavo ci potesse essere una civiltà nel mio bidone! Non ho idea di come aiutarvi!\n";
			    cout<<"-Avrai sicuramente un'idea. Tu sei il Creatore del nostro mondo, sei onnipotente. Abbiamo bisogno del tuo aiuto, e in fretta!\n";
			    do{cout<<"Questa rapida successione di avvenimenti ti ha scosso la test, ma sai che devi agire in fretta per aiutare gli abitanti del tuo bidone dell'umido. Cosa scegli di fare? Digita 0 se vvuoi rovesciare il bidone o 1 se vuoi infilarci una mano dentro:  ";
			    cin>>x;}while(x>1);
			    if(x==0){
			     cout<<"Preso da un grande coraggio e dalla foga del momento, afferri il bidone dell'umido, lo capovolgi e rovesci tutto il suo contenuto per terra.\n";
			     cout<<"Dopo aver fatto ciò provi a carcare dove si trova il malvagio essere fatto di yogurt scaduto, ma non trovandolo decidi che la scelta migliore è calpestare tutto ciò che è caduto dal bidone.\n";
			     cout<<"Hai ristabilito la pace all'interno del bidone sconfiggendo il tiranno. Sei tutto fiero del tuo operato e per festeggiare ti siedi a tavola a mangiare le tue patate. Punteggio 6/10 e ti senti una merda perchè ti accorgi di aver ucciso un'intera civiltà.";
			    }else{
			        cout<<"Quello che stai per fare ti fa parecchio schifo, ma non esiti pensando che lo stai facendo per il bene di una civiltà. Infili la tua mano all'interno del bidone dell'umido e cerchi alla cieca il malvagio essere fatto di yogurt scaduto.\n";
			        cout<<"Dopo quasi 15 minuti che la tua mano scorrazza dentro la spazzatura, trovi il tiranno del bidone e lo tiri fuori tutto orgoglioso: è un ammasso putrido di yogurt scaduto.\n";
			        cout<<"I due ambasciatori ti ringraziano per l'operato e tornano all'interno del bidone. Orgoglioso della missione compiuta, ti siedi a tavola per mangiare le tue patate. Diemntichi però di lavarti le mani: il risultato è che alle patate mischi lo yogurt scaduto che avevi appena catturato. Punteggio 2/10";}
			}
        }
    }
} cout<<"\n\n L'avventura termina qui, speriamo che vi sia piaciuta. Sappiamo che e' molto breve, ma ci sono molti finali diversi, quindi rigiocatela per scoprire nuovi scenari e divertirvi ancora!";
  cout<<endl<<"Vuoi rigiocare l'avventura?"<<endl<<"1. Sì"<<endl<<"2. No"<<endl;
  cin>>x;
  while(x!=1&&x!=2){
  	cout<<endl<<"Digita un numero valido: ";
  	cin>>x;
  }
  if(x!=1){
  	y=1;
  }
}
}
