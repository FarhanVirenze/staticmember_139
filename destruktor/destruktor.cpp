// destruktor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class angka {
private:
	int *arr;
	int panjang;
public:
	angka(int); //Constructor
	~angka(); //Destructor
	void cetakData();
	void isiData(); 
};
//Definisi Member Function
angka::angka(int i){ //Constructor
	panjang = 1;
	arr = new int[i];
	isiData();
}

angka::~angka() { //Destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakData() {
	for (int i = 1;i <= panjang;i++) {
		cout << i << " = " << arr[i]<<endl;
	}
}

void angka::isiData() {
	for (int i = 1;i <= panjang;i++) {
		cout << i << " = ";cin >> arr[i];
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3); //Constructor Dipanggil
	angka* ptrBelajarcpp = new angka(5); //Constructor Dipanggil
	delete ptrBelajarcpp; //Destructor Dipanggil

	
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
