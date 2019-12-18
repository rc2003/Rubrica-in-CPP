#include <iostream>
using namespace std;


float dollari_euro (float tasso, float valuta1, float valuta2){
	
	valuta2= valuta1*tasso;
	cout<<"La tua valuta in euro e' "<<valuta2<<endl;
	
	
}
float euro_dollari (float tasso, float valuta1, float valuta2){
	
	valuta2= valuta1/tasso;
	cout<<"La tua valuta in dollari e' "<<valuta2<<endl;
	
	
}
float euro_sterline (float tasso, float valuta1, float valuta2){
	
	valuta2= valuta1/tasso;
	cout<<"La tua valuta in sterline e' "<<valuta2<<endl;
	
	
}
float sterline_euro (float tasso, float valuta1, float valuta2){
	
	valuta2= valuta1*tasso;
	cout<<"La tua valuta in euro e' "<<valuta2<<endl;
	
	
}
float tasso1 (float tasso){
	
	
	cout<<"Il tasso USD/EUR e' "<<tasso<<endl;
	
	
}
float tasso2 (float tasso){
	
	
	cout<<"Il tasso GBP/EUR e' "<<tasso<<endl;
	
	
}



int main(){
	int scelta;
	float tasso, valuta1, valuta2;
	
	do{
	
		cout << "\n1. Cambio DOLLARI/EURO" << endl;
		cout << "2. Cambio EURO/DOLLARI" << endl;
		cout << "3. Cambio EURO/STERLINE" << endl;
		cout << "4. Cambio STERLINE/EURO" << endl;
		cout << "5. Variazione tasso EUR7USD" << endl;
		cout << "6. Variazione tasso EUR/GBP" << endl;
		cout << "7. Esci" << endl;
		cin >> scelta;
		
		switch(scelta){
			case(1):
			{
				cout<<"Inserisci la valuta da cambiare ";
				cin>>valuta1;
				cout<<"Inserisci tasso ";
				cin>>tasso;
				dollari_euro(tasso, valuta1, valuta2=0);
				
				break;
			}
			case(2):
			{
				cout<<"Inserisci la valuta da cambiare ";
				cin>>valuta1;
				cout<<"Inserisci tasso ";
				cin>>tasso;
				euro_dollari(tasso, valuta1, valuta2=0);
				
				break;
			}
			case(3):
			{
				cout<<"Inserisci la valuta da cambiare ";
				cin>>valuta1;
				cout<<"Inserisci tasso ";
				cin>>tasso;
				euro_dollari(tasso, valuta1, valuta2=0);
				
				break;
			}
			
		}
	
	
	
	
	
	
	}while( scelta !=7 );
	

	
	
}
