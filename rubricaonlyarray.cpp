using namespace std;
#include <iostream>
#include <string>

int main()
{
	int a;
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
	while (true)
	{
		
	}
	for(int b=0; b<a; b++)
	{
		if (b<a-1)
		{
			cout<<rubrica[b]<<endl;
		}
		else
		{
			cout<<rubrica[b];
		}
	
	}
	cout<<"Vuoi eliminare un contatto";
	cin>>z;
	if ()
		
	
}
