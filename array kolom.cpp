#include <iostream>

using namespace std;

int main(){
	
//kolom baris
  int i, j, b, k, matriks[20][20], transpose[20][20];

  cout << "Masukkan jumlah baris matriks: ";
  cin >> b;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> k;
  cout << endl;

  cout << "Masukkan elemen matriks \n";
  for (i = 0; i < b; i++) {
    for (j = 0; j < k; j++) {
      cout << "Nilai Baris " << i+1 << " Kolom " << j+1 << " = " ;
	  cin  >> matriks[i][j];
    }
  }
  cout << "\n";

  cout << "Matriks Awal : \n";
  for (i = 0; i < b; i++){
    for (j = 0; j < k; j++){
      cout << matriks[i][j] << "\t";
    }
    cout << endl;
  }
  
  
  for (i = 0; i < b; i++){
    for (j = 0; j < k; j++){
      transpose[j][i] = matriks[i][j];
    }
  }

  cout << "Hasil Transpose Matriks: \n";
  for (i = 0; i < k; i++){
    for (j = 0; j < b; j++){
      cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
}
