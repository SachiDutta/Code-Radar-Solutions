void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
      
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min =j;
            }
        }
        if(min != i){
            int temp= arr[i];
                 arr[i]= arr[min];
                arr[min]= temp;
        }
    }
}
int kthSmallest(int arr[], int n, int k) {
    selectionSort(arr, n); 
    return arr[k - 1]; 
}

