int sortFunc(int* arr, int n) {
    int temp = 0;
    int flag = 0;
    
    while(1) {
	flag = 1;
	for(int i=0; i<n-1; i++) {
		if(arr[i]>arr[i+1]) {
		    temp = arr[i];
		    arr[i] = arr[i+1];
		    arr[i+1] = temp;
		    flag = 0;
		}
	    }
	if(flag != 0)
		break;
	}
	
    return 0;
}
