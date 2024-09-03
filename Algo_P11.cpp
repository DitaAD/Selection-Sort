#include <iostream>

using namespace std;

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    //mencari nilai terkecil/minimum dalam array
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        //menyimpan nilai minimum pada variabel temp
        temp = arr[minIndex];
        //menukar nilai minimum dengan nilai pada indeks i
        arr[minIndex] = arr[i];
        //mengembalikan nilai pada indeks i dengan nilai minimum yang sedang disimpan pada variabel temp
        arr[i] = temp;
        
        cout << endl;
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
    }
}

int main() {
    int n;
    //menginput jumlah array 
    cout << "masukkan jumlah elemen : ";
    cin >> n;
    
    //menginput angka array
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "masukkan nilai array ke-" << i+1 << ": ";
        cin >> arr[i];
    }
    cout << endl;
    
    //menampilkan kembali semua angka yang telah diinput
    cout << "sebelum sorting : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    //menampilkan proses sorting
    cout << "\nproses Sorting : ";
    selectionSort(arr, n);
    cout << endl;
    
    //menampilkan hasil sorting
    cout << "\nhasil sorting : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
