# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Pemograman 
<br> Nama	      	: Farid Muhtar Fathir
<br>NIM		        :	1227050044
<br>Jurusan		    :[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
code No.1
menjelaskan tentang array 2 dimensi yang membuat kolom dan baris

## Source Code
Source code No.1
```cpp
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

```

```cpp
Source code No.1

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
```
## Output
No.1
<img src="https://github.com/faridmuhtarfathir/UAS-PRAKTIKUM-DASPROG/blob/main/Screenshot%20(9).png">

No.2
<img src="
