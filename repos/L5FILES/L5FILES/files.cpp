#include "files.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <string.h>

using namespace std;

void simpleFileWrite() {
	ofstream oFile("ascii_ex.txt"); //etsi anoigoume arxeio
		//twra tsekaroume na doume an exei anoixei kanonika to arxeio;
	if (!oFile.is_open()) {
		printf("Could not open ascii_ex.txt!!!\n");
		return;		//gia na mhn sunxeisei thn ektelesh tou kwdika
	}

	string text("Output some text to the f ile\n\n");
	oFile << text;		//vale to text pou thes sto reuma/stream pou exeis ftiaxei
	double PI = 3.1415926536;
	oFile << "\n";
	for (int i = 0; i < 10; i++) {
		oFile << setprecision(10 - i) << PI << endl;
	}
	oFile.seekp(0, ios_base::beg);	//poses theseis, apo pou theleis na metafereis ton deikth.
	//se authn thn periptwsh thetoume ton deikth sthn axrh kai gia auto to spilios tha vgei prwto

	oFile << "Spilios\n";
	
	oFile.close();		// kathe antikeimeno thelei kai close sto telos

	ofstream aFile("ascii_ex.txt"); //etsi anoigoume arxeio
	//twra tsekaroume na doume an exei anoixei kanonika to arxeio;
	if (!aFile.is_open()) {
		printf("Could not open ascii_ex.txt!!!\n");
		return;		//gia na mhn sunxeisei thn ektelesh tou kwdika
	}
	aFile << "Spilios Spiliopoulos\n";
	aFile.close();		
}

void simpleFileApp() {
	ofstream aFile("ascii_ex.txt",ios::app); //etsi anoigoume arxeio, app gia append
	//twra tsekaroume na doume an exei anoixei kanonika to arxeio;
	if (!aFile.is_open()) {
		printf("Could not open ascii_ex.txt!!!\n");
		return;		//gia na mhn sunxeisei thn ektelesh tou kwdika
	}
	aFile << "Spilios Spiliopoulos\n";
	aFile.close();
}

void simpleFileR(const char* fname) {
	//theloume na anoixoume kai na diavasoume ena sugkekrimeno arxeio
	//gnwrizontas thn domh tou, pou einai ktlktl.
	ifstream iFile("fname");	//onoma tou arxeiou san parametros ths sunarthsh
	string text;
	int x;
	float y;
	iFile >> text >> x >> y;
	cout << "Read from file::\n" << text << "\n" << x << "\n" << y << endl;
	iFile.close();
}
//epikefalida, integer, x integer
void rwBinary() {//akatalavistika einai ta binary arxeia
	fstream iofile("BinRW.txt, ios::out | ios::in | ios::binary");
				  //onoma	   grapsw	  diavasw
	if (!iofile.is_open()){
		printf("Could not open ascii_ex.txt!!!\n");
		return;
	}
	string text = "Spilios Custom TXT file";
	iofile.write(text.c_str(),text.size()); //apo pou, kai posous 
	int numOfInts;
	cout << "Give an integer\n";
	cin >> numOfInts;
	iofile.write((char*)&numOfInts,sizeof(int));
	for (int i = 0; i < numOfInts; i++) {
		int j = i * i;
		iofile.write((char*)&j, sizeof(int));
	}
	iofile.flush();
	iofile.clear();		//gurizei ta flags sthn arxikh tous timh (?)
	iofile.seekg(0, ios_base::beg);
	const int bufsize = 64;
	char buf[bufsize];
	iofile.getline(buf, bufsize);
	if (_stricmp(buf, "Spilios Custom TXT file") == 0) {
		int numVals;// na diavasw ws arithmo tous 4 xaraktires ths epikefalidas
		iofile.read((char*)&numVals, sizeof(int));
		cout << "Number of values in the file: " << numVals;
		int* valsArray = new int[numVals];
		iofile.read((char*)valsArray, sizeof(int) * numVals);

	}

	iofile.close();
}		


