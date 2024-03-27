#include <iostream>
#include <string>

void Log(std::string message) { std::cout << message << std::endl; }

void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++)
    std::cout << arr[i] << " ";
  std::cout << std::endl;
}

int validity(int size, int arr[]) {
  if (size == 0) {
    Log("Not a valid array");
    return 1;
  } else if (size == 1) {
    Log("Already Sorted");
    std::cout << arr[0] << std::endl;
    return 1;
  } else {
    return 0;
  }
}

void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void selectionSort(int arr[], int n) {
  int i, j, min_idx;
  for (i = 0; i < n - 1; i++) {
    min_idx = i;
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }
    swap(&arr[min_idx], &arr[i]);
  }
}

int main(int argc, char *argv[]) {
  // int arr[6] = {6, 8, 7, 5, 3, 4};
  int arr[argc - 1];

  for (int i = 1; i < argc; ++i) {
    arr[i - 1] = std::stoi(std::string(argv[i]));
  }

  // int size = sizeof(arr) / sizeof(arr[0]);
  int size = argc - 1;

  if (validity(size, arr) != 0) {
    return 0;
  } else {
    Log("Sorting...");
  }

  printArray(arr, size);
  selectionSort(arr, size);
  printArray(arr, size);
  return 0;
}
