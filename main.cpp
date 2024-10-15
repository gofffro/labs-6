#include <iostream>

using namespace std;

int Random(int min, int max) {
  return min + rand() % (max - min);
}

void arrayFiller(int Array[], int arraySize) {
    for (int arrayColumn = 0; arrayColumn < arraySize; ++arrayColumn) {
        Array[arrayColumn] = Random(1, 100);
    }
}

int arraySum(int Array[], int arraySize, int maxNumber) {
    int countArray = 0;
    for (int arrayColumn = 0; arrayColumn < arraySize; ++arrayColumn) {
        if (Array[arrayColumn] < maxNumber) {
            countArray += Array[arrayColumn];
        }
    }
    return countArray;
}

void outputArray (int Array[], int arraySize) {
    for (int arrayColumn = 0; arrayColumn < arraySize; ++arrayColumn) {
        cout << Array[arrayColumn] << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    srand(time(0));
    
    int b = Random(1, 100);
    int n = Random(1, 20);
    int m = Random(1, 20);
    
    
    int G[n];
    int V[m];
    
    arrayFiller(G, n);
    arrayFiller(V, m);

    cout << "Массив G: ";
    outputArray(G,n);
    cout << "Массив V: ";
    outputArray(V,m);
    
    cout << "Число b: " << b << endl;
    
    cout << "Сумма элементов массива G < b: " << arraySum(G, n, b) << endl;
    cout << "Сумма элементов массива V < b: " << arraySum(V, m, b) << endl;
}
