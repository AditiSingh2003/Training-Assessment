void nextSmallerToRight(int arr[], int n) {
    int output[n];
    output[n - 1] = -1; 
    for (int i = n - 2; i >= 0; i--) {
        int j = i + 1;
        while (j != -1 && arr[j] >= arr[i]) {
            j = output[j]; 
        }
        output[i] = j;
    }
    for (int i = 0; i < n; i++) {
        cout << output[i] << " ";
    }
}