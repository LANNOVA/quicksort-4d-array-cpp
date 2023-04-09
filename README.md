# Quicksort-4D-Array

This is a C++ implementation of the Quicksort algorithm for sorting a 4-dimensional array.

## Description

The `quicksort_4d_array` function in this code takes a 4-dimensional array as input and sorts it in ascending order using the Quicksort algorithm. The code uses a recursive approach to perform the sorting operation on multiple dimensions of the array.

## Usage

To use this code, you can include the `quicksort_4d_array` function in your C++ project and call it with the appropriate parameters, such as the 4-dimensional array to be sorted and the starting and ending indices for each dimension.

```c++
// Example usage
#include <iostream>

const int SIZE1 = 10;
const int SIZE2 = 10;
const int SIZE3 = 10;
const int SIZE4 = 10;

void quicksort_4d_array(int arr[SIZE1][SIZE2][SIZE3][SIZE4], int start1, int end1, int start2, int end2, int start3, int end3, int start4, int end4) {
    // Implementation of quicksort_4d_array function
    //


int main() {
    int arr[SIZE1][SIZE2][SIZE3][SIZE4] = { /* Initialize array */ };
    quicksort_4d_array(arr, 0, SIZE1-1, 0, SIZE2-1, 0, SIZE3-1, 0, SIZE4-1);
    // Array will be sorted in ascending order
    return 0;
}
```

## Contributing

If you would like to contribute to this project, please fork the repository, make changes, and submit a pull request.

## Donate SRAVStudios
**BTC** - bc1q5kmqqynratseyh7v0n8q58rn7p5xejuemmc4px

**USDT(ETH)**  - 0x8558288490E11E7F900471E7D52F0b0A0B6b8572

**USDT(SOLANA)**  - 4MjmiAwiQT1cqb5fSpvdsKCabZAKxopcMsTqem9gWBqB

**USDT(POLYGON)**  - 0x8558288490E11E7F900471E7D52F0b0A0B6b8572

**ETH**  - 0x8558288490E11E7F900471E7D52F0b0A0B6b8572
