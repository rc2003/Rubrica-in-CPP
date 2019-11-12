
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a;
	int scelta;
	string z;
	
	cout<<"Quanti contatti vuoi inserire? (Min 1 Max 20)";
	cin>>a;
	string rubrica[20];
	for(int i=0; i<20; i++)
	{
		if (i<a)
		{
			cout<<"Inserisci il contatto (Nome Cognome - Numero)";
			cin>>rubrica[i];
		}
		else
		{
			rubrica[i]= "";
		}
		
	}
	
	do
	{
	cout << "\n1-Stampa contatti\n";
	cout << "2-Elimina contatti\n";
	cout << "3-Aggiungi contatti\n";
	cout << "4-Esci\n" << endl;
	cin >> scelta;
	
	switch(scelta){
		
		
	case(1):
	{
		cout<<"RUBRICA:"<<endl;
		for(int b=0; b<a; b++)
	{
		if (b<a-1)
		{
			cout<<rubrica[b]<<endl;
		}
		else
		{
			cout<<rubrica[b]<<endl;
		}
	}
		
	}
	break;
	
	case(2):
		{
			
		}
	break;
		
	case(3):
		{   string contatto;
			for(int c=0;c<20;c++)
			{
				if (rubrica[c]=="")
				{
					cout << "Inserisci Nome Cognome - Numero del contatto: ";
					cin >> contatto;
					rubrica[c]= contatto;
					break;
				}
				
			}

			
		}
	break;
	}
	
	}while(true);
	
}
