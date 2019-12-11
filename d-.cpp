#include <iostream>
using namespace std;
float USD_EUR(float tasso, float USD, float EUR)
	EUR = tasso*USD;
	cout << EUR;
float EUR_USD(float tasso, float EUR, float USD)
	USD = tasso/EUR;
	cout << USD;
float EUR_GBP(float tasso, float EUR, float GBP)
	GBP = tasso/EUR;
	cout << GBP;
float GBP_EUR(float tasso, float GBP, float EUR)
	EUR = tasso*GBP;
	cout << EUR;
float tassoEUR_USD(float tasso, float EUR, float USD)
	tasso = EUR/USD;
	cout << tasso;
float tassoEUR_GBP(float tasso, float EUR, float GBP)
	tasso = EUR/GBP;
	cout << tasso;
	
int main(){
	int scelta;
	int importo;
	cout << "1. Cambio DOLLARI\EURO" << endl;
	cout << "2. Cambio EURO\DOLLARI" << endl;
	cout << "3. Cambio EURO\STERLINE" << endl;
	cout << "4. Cambio STERLINE\EURO" << endl;
	cout << "5. Variazione tasso EUR\USD" << endl;
	cout << "6. Variazione tasso EUR\GBP" << endl;
	cout << "7. Esci" << endl;
	cin >> scelta;
	
	switch(scelta){
	case(1){
		cout << "Inserisci l'importo -> ";
		cin << importo;
		EUR_USD(1.1, importo);
		break;
	}
	case(2){
		cout << "Inserisci l'importo -> ";
		cin << importo;
		USD_EUR(1.1, importo);
		break;
	}
	case(3){
		cout << "Inserisci l'importo -> ";
		cin << importo;
		EUR_GBP(0.775, importo);
		break;
	}
	case(4){
		cout << "Inserisci l'importo -> ";
		cin << importo;
		GBP_EUR(0.775, importo);
		break;
	}
	case(5){
		cout << "Inserisci l'importo in euro -> ";
		cin << importo;
		tassoEUR_USD(1.1, importo);
		break;
	}
	case(6){
		cout << "Inserisci l'importo -> ";
		cin << importo;
		EUR_USD(1.1, importo);
		break;
	}
	case(7){
		cout << "Inserisci l'importo -> ";
		cin << importo;
		EUR_USD(1.1, importo)
		break;
	}
	}
	
	
}
	
