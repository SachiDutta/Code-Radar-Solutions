int SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        char min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
             }
             if(min!=i){
                char temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
             }
    }
}
int PrintArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%ch",arr[i]);
    }
    printf("\n");
}