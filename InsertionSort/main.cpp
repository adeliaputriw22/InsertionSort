//InsertionSort For While

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) { //fungsiinsertsort
    int temp, i, j;
    for (i = 1; i < n; i++) {
        temp = arr[i]; //Menyimpan arr[i] di temp
        j = i - 1; //Nilai j di inialisasi jadi i-1

        while (j >= 0 && arr[j] > temp) { //Perintah Membandingkan Array
            arr[j + 1] = arr[j];
            j = j - 1; //Nilai j di kurangi 1
        }
        arr[j + 1] = temp; //Nilai arr[j+1] di simpan dalam temp
    }
}

//Mencetak array
void cetakArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = { 5, 2, 4, 3, 1 }; //Array yang akan di sorting
    int n = sizeof(arr) / sizeof(arr[0]); //mencari besar array

    insertionSort(arr, n); //Memanggil Fungsi Insert Array
    cout << "Array yang telah diurutkan: " << endl;
    cetakArray(arr, n); //Memanggil Cetak Insert Array

    return 0;
}
