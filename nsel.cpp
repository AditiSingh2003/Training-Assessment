void nextSmallestToLeft(int arr[], int n) {
    int output[n];
    output[0] = -1; 
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        while (j >= 0 && arr[j] >= arr[i]) {
            j = output[j]; 
        }
        output[i] = j;
    }
    for (int i = 0; i < n; i++) {
        cout << output[i] << " ";
    }
}