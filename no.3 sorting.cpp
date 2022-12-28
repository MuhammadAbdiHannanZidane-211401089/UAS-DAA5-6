#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>

using namespace std;


void bubbleASC(int nums[10], int n);
void bubbleDSC(int nums[10], int n);
void selectionASC(int nums[10], int n);
void selectionDSC(int nums[10], int n);
void insertionASC(int nums[10], int n);
void insertionDSC(int nums[10], int n);



int main (){
     system("cls");
     int numbers[] = {69,7,21,45};
     int opsi, size = sizeof(numbers)/sizeof(numbers[0]);

     cout << "Sorting Program"  << endl;
     cout << "----------------"  << endl << endl;
     cout << "Data acak: ";

     for (int i = 0; i < size; i++){
          cout << numbers[i] << " ";
     }

     cout << "\n\nPilih Metode" << endl;
     cout << "1. [Ascending] Bubble Sort" << endl;
     cout << "2. [Descending] Bubble Sort" << endl;
     cout << "3. [Ascending] Selection Sort" << endl;
     cout << "4. [Descending] Selection Sort" << endl;
     cout << "5. [Ascending] Insertion Sort" << endl;
     cout << "6. [Descending] Insertion Sort" << endl;
     cout << "Pilihanmu (Input Kode): "; cin >> opsi;

     if (opsi == 1){
          bubbleASC(numbers, size);
     }
     else if(opsi == 2){
          bubbleDSC(numbers, size);
     }
     else if(opsi == 3){
          selectionASC(numbers, size);
     }
     else if(opsi == 4){
          selectionDSC(numbers, size);
     }
     else if(opsi == 5){
          insertionASC(numbers, size);
     }
     else if(opsi == 6){
          insertionDSC(numbers, size);
     }
     else {
          cout << "pilihan tidak tersedia";
     }

     return 0;
}

void bubbleASC(int nums[10],  int n){
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);

     cout << "Data Urut: ";
     for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
     cout << endl;

};

void bubbleDSC(int nums[10], int n){
     for (int i = 0 ; i < (n - 1 ); i++){
                for (int j= 0 ; j < n - i - 1; j++){
                        if(nums[j] < nums[j+1]){
                                swap(nums[j], nums[j + 1]);
                        }
                }
        }

     cout << "Data Urut: ";
     for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
     cout << endl;
     
};

void selectionASC(int nums[10], int n){
     int min_in;
    for( int i = 0; i < n; i++){
        min_in = i;
        for( int j= i + 1 ; j < n; j++)
            if (nums[j] < nums[min_in])
                min_in = j;
        swap(nums[i],nums[min_in]);
    }
    
    cout << "Data Urut: ";
    for(int i = 0; i < n; i++)
        cout<< nums[i] << " ";
    cout<<endl;
};

void selectionDSC(int nums[10], int n){
     int temp;
     for(int i=0;i< n ;i++){
          for(int j=i+1;j< n ;j++){
               if(nums[i]< nums[j]){
                    swap(nums[i],nums[j]);
               }
          }
     }
     
     cout << "Data Urut: ";
     for(int i = 0; i < n; i++)
        cout<< nums[i] << " ";
     cout<<endl;
};

void insertionASC(int nums[10], int n){
     int key, j;
     for(int i = 1; i < n; i++) {
          key = nums[i];
          j = i;
          while(j > 0 && nums[j-1]>key) {
               nums[j] = nums[j-1];
               j--;
          }
          nums[j] = key;  
     }

     cout << "Data Urut: ";
     for(int i = 0; i < n; i++)
        cout<< nums[i] << " ";
     cout<<endl;

};
void insertionDSC(int nums[10], int n){
     int temp;
    for (int i = 0; i < n; i++)
    {
        temp = nums[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (temp < nums[j])
            {
                nums[j + 1] = temp;
                break;
            }
            else if (temp >= nums[j])
            {
                nums[j + 1] = nums[j];
                if (j == 0)
                {
                    nums[j] = temp;
                }
            }
        }
    }
     
     cout << "Data Urut: ";
     for(int i = 0; i < n; i++)
        cout<< nums[i] << " ";
     cout<<endl;

};