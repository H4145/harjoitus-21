/*
Eetu Salo

Harjoitus 21 (Palautus vko 48)
Muunna harjoitus 11 niin, etta k‰yt‰t seuraavia aliohjelmia:

int KysyValinta(void);

-> KysyValinta paluttaa k‰ytt‰j‰n antaman valintanumeron (0-6)

double Summa(float luku1, int luku2);

-> Summa laskee yhteen annetut tiedot ja palauttaa summan p‰‰ohjelmaan



*/





#include <iostream>
using namespace std;
int KysyValinta(void);
double Summa(float,int);

int main()
{
	int l1;
	int l2;
	int valinta = 1;
	cout << "Anna luku: ";
	cin >> l1;
	cout << "Anna toinen luku: ";
	cin >> l2;
	valinta = KysyValinta();

	while (valinta != 0)
	{
		switch (valinta)
		{

		case 1:
			Summa(l1, l2);
			valinta = KysyValinta();
			break;

		case 2:

			cout << "\nErotus (" << l1 << "," << l2 << "):";
			cout << l1 - l2 << endl << endl;
			valinta = KysyValinta();
			break;

		case 3:

			cout << "\nTulo (" << l1 << "," << l2 << "):";
			cout << l1 * l2 << endl << endl;
			valinta = KysyValinta();
			break;

		case 4:

			cout << "\nOsamaara (" << l1 << "," << l2 << "):";
			cout << (float)l1 / l2 << endl << endl;
			valinta = KysyValinta();
			break;

		case 5:
			cout << "\nJakojaannos (" << l1 << "," << l2 << "):";
			cout << l1 % l2 << endl << endl;
			valinta = KysyValinta();
			break;

			
		
		case 6:
				cout << "Anna uudet luvut.\n\n";
				cout << "Anna luku 1: ";
				cin >> l1;
				cout << "Anna luku 2: ";
				cin >> l2;
				valinta = KysyValinta();
				break;
			}
		}
	}


int KysyValinta(void)
{
	int valinta;
	cout << "VALIKKO\n0. Lopetus\n1. Summa\n2. Erotus\n3. Tulo\n4. Osamaara\n5. Jakojaannos\n6. Syota uudet luvut\n ";
	cout << "Valitse laskutoimitus: ";
	cin >> valinta;
	return valinta;
}
double Summa(float l1, int l2)
{
	double summa;
	summa = l1 + l2;
	cout << "\nSumma (" << l1 << "," << l2 << "):";
	cout << summa << endl << endl;
	return summa;
}