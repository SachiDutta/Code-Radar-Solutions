void selectionSort(string arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
             }
            
                
                swap(arr[i],arr[min]);
             
    }
}
void printArray(string arr[],int n){
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
    printf("\n");
}