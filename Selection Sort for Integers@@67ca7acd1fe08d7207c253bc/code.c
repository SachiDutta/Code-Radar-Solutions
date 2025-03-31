void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min =j;
            }
        }
        if(min != i){
            int temp=int arr[j];
                 arr[j]=int arr[min];
                arr[min]= temp;
        }
    }
}
int printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}