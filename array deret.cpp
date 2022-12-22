#include <iostream>
using namespace std;
int main() {
	//deret matematika
	int array[20][20], baris, kolom;
    cout << "masukkan jumlah baris : ";cin >> baris;
    cout << "masukkan jumlah kolom : ";cin >> kolom;
    cout << "masukkan nilai : " << endl;
    for(int i = 0; i < baris ;i++){
        for(int n = 0; n < kolom ;n++){
            cout << "masukkan nilai baris ke-" << i+1 << " kolom ke-" << n+1 << " : ";
            cin >> array[i][n];
        }
    }
    cout << "nilai awal :" << endl;
    for(int i = 0; i < baris ;i++){
        for(int n = 0; n < kolom ;n++){
            cout << array[i][n] << " ";
        }
        cout << endl;
    }
    cout << "nilai akhir :" << endl;
    for(int i = 0; i < baris ;i++){
            for(int n = 0; n < kolom ;n++){
                if(array[i][n]%3 != 0 && array[i][n]%5 != 0 && array[i][n]%7 != 0){
                    cout << array[i][n] << " ";
                }
                else{
                }
            }
    }
    return 0;
}

