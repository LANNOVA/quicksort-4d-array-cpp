void quicksort_4d_array(int arr[SIZE1][SIZE2][SIZE3][SIZE4], int start1, int end1, int start2, int end2, int start3, int end3, int start4, int end4) {
    if (start1 >= end1 || start2 >= end2 || start3 >= end3 || start4 >= end4) {
        return;
    }
    int pivot = arr[start1][start2][start3][start4];
    int i = start1, j = start2, k = start3, l = start4;
    for (int m = start1; m <= end1; m++) {
        for (int n = start2; n <= end2; n++) {
            for (int p = start3; p <= end3; p++) {
                for (int q = start4; q <= end4; q++) {
                    if (arr[m][n][p][q] < pivot) {
                        std::swap(arr[i][j][k][l], arr[m][n][p][q]);
                        if (arr[i][j][k][l] < pivot) {
                            std::swap(arr[i][j][k][l], arr[m][n][p][q]);
                        }
                        if (q < end4) {
                            q++;
                        }
                        else {
                            q = start4;
                            if (p < end3) {
                                p++;
                            }
                            else {
                                p = start3;
                                if (n < end2) {
                                    n++;
                                }
                                else {
                                    n = start2;
                                    m++;
                                }
                            }
                        }
                    }
                    else if (arr[m][n][p][q] == pivot) {
                        if (q < end4) {
                            q++;
                        }
                        else {
                            q = start4;
                            if (p < end3) {
                                p++;
                            }
                            else {
                                p = start3;
                                if (n < end2) {
                                    n++;
                                }
                                else {
                                    n = start2;
                                    m++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    quicksort_4d_array(arr, start1, i - 1, start2, end2, start3, end3, start4, end4);
    quicksort_4d_array(arr, i, end1, start2, j - 1, start3, end3, start4, end4);
    quicksort_4d_array(arr, i, end1, j, end2, start3, end3, start4, end4);
    quicksort_4d_array(arr, i, end1, j, end2, k, end3, start4, end4);
    quicksort_4d_array(arr, i, end1, j, end2, k, end3, l, end4);
}
