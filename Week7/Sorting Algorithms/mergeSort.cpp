#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right){
    int s1 = mid - left + 1;
    int s2 = right - mid;

    int tempL[s1], tempR[s2];

    for (int i = 0; i < s1; i++) {
        tempL[i] = arr[left + i];
    }
    for (int j = 0; j < s2; j++) {
        tempR[j] = arr[mid + 1 + j];
    }

    int i = 0; 
    int j = 0; 
    int k = left; 

    while (i < s1 && j < s2) {
        if (tempL[i] <= tempR[j]){
            arr[k] = tempL[i];
            i++;
        } else {
            arr[k] = tempR[j];
            j++;
        }
        k++;
    }

    while (i < s1){
        arr[k] = tempL[i];
        i++;
        k++;
    }

    while (j < s2) {
        arr[k] = tempR[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left)/2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }

}

int main() {

    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, n-1); 

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}