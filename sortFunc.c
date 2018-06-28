int sortFunc(int* arr, int n) {
    int temp = 0;
    for(int k=0; k<n; k++) {
	for(int i=0; i<n-1; i++) {
		if(arr[i]>arr[i+1]) {
		    temp = arr[i];
		    arr[i] = arr[i+1];
		    arr[i+1] = temp;
		}
	    }
	}

    return 0;
}
