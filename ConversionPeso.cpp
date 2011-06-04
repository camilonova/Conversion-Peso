#include <iostream.h>

/*	Programa que efectua conversiones de peso	*/

void main() {
	static double LIBRASxKG = 2.2046;
	static double GRAMOSxKG = 1000.0;
	static double ONZASxLBS = 16.0;
	
	int eleccion;
	double pesoI, pesoF;
	char continuar;

	cout<< "\nBienvenido, digite el valor y el tipo de peso a convertir" << endl;

	do {
		cout<< "\nDigite el peso:\t\t";
		cin>> pesoI;

		cout<< "\nLa conversion ha realizar es:\n";
		cout<< "1.\tLibras a Kilogramos" << endl;
		cout<< "2.\tLibras a Gramos" << endl;
		cout<< "3.\tLibras a Onzas" << endl;
		cout<< "4.\tKilogramos a Libras" << endl;
		cout<< "5.\tKilogramos a Gramos" << endl;
		cout<< "6.\tKilogramos a Onzas" << endl;
		cout<< "7.\tGramos a Libras" << endl;
		cout<< "8.\tGramos a Kilogramos" << endl;
		cout<< "9.\tGramos a Onzas" << endl;
		cout<< "10.\tOnzas a Libras" << endl;
		cout<< "11.\tOnzas a Kilogramos" << endl;
		cout<< "12.\tOnzas a Gramos" << endl;
		cout<< "Digite su eleccion (1-12):\t";
		cin>> eleccion;

		switch(eleccion) {
		case 1 :
			//Libras a Kilogramos
			pesoF = pesoI/LIBRASxKG;
			cout<< "\nSu conversion es: " << pesoI << " libras. son " << pesoF << " kilogramos." << endl;
			break;
		case 2:
			//Libras a Gramos
			pesoF = pesoI*GRAMOSxKG/LIBRASxKG;
			cout<< "\nSu conversion es: " << pesoI << " libras. son " << pesoF << " gramos." << endl;
			break;
		case 3:
			//Libras a Onzas
			pesoF = pesoI*ONZASxLBS;
			cout<< "\nSu conversion es: " << pesoI << " libras. son " << pesoF << " onzas." << endl;
			break;
		case 4:
			//Kilogramos a Libras
			pesoF = pesoI*LIBRASxKG;
			cout<< "\nSu conversion es: " << pesoI << " kilogramos. son " << pesoF << " libras." << endl;
			break;
		case 5:
			//Kilogramos a Gramos
			pesoF = pesoI*GRAMOSxKG;
			cout<< "\nSu conversion es: " << pesoI << " kilogramos. son " << pesoF << " gramos." << endl;
			break;
		case 6:
			//Kilogramos a Onzas
			pesoF = pesoI*LIBRASxKG*ONZASxLBS;
			cout<< "\nSu conversion es: " << pesoI << " kilogramos. son " << pesoF << " onzas." << endl;
			break;
		case 7:
			//Gramos a Libras
			pesoF = pesoI*LIBRASxKG/GRAMOSxKG;
			cout<< "\nSu conversion es: " << pesoI << " gramos. son " << pesoF << " libras." << endl;
			break;
		case 8:
			//Gramos a Kilogramos
			pesoF = pesoI/GRAMOSxKG;
			cout<< "\nSu conversion es: " << pesoI << " gramos. son " << pesoF << " kilogramos." << endl;
			break;
		case 9:
			//Gramos a Onzas
			pesoF = pesoI*LIBRASxKG*ONZASxLBS/GRAMOSxKG;
			cout<< "\nSu conversion es: " << pesoI << " gramos. son " << pesoF << " onzas." << endl;
			break;
		case 10:
			//Onzas a Libras
			pesoF = pesoI/ONZASxLBS;
			cout<< "\nSu conversion es: " << pesoI << " onzas. son " << pesoF << " libras." << endl;
			break;
		case 11:
			//Onzas a Kilogramos
			pesoF = pesoI/ONZASxLBS/LIBRASxKG;
			cout<< "\nSu conversion es: " << pesoI << " onzas. son " << pesoF << " kilogramos." << endl;
			break;
		case 12:
			//Onzas a Gramos
			pesoF = pesoI*GRAMOSxKG/LIBRASxKG/ONZASxLBS;
			cout<< "\nSu conversion es: " << pesoI << " onzas. son " << pesoF << " libras." << endl;
			break;
		default:
			cout<< "\nUsted ha elegido una opcion incorrecta...";
			break;
		}
		
		cout<< "\nDesea continuar convirtiendo pesos? (S/N)\t";
		cin>> continuar;	
		
	} while(continuar == 's' || continuar == 'S');

}