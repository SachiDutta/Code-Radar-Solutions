void selectionSort(int arr[],int num){
    for(int i=0;i<num-1;i++){
        int min=i;
      
        for(int j=i+1;j<num;j++){
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
    selectionSort(arr, num); 
    return arr[k - 1]; 
}

