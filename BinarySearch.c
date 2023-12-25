int BinarySearch(int key, const int *arr, int len){
    int low = 0;
    int hig = len - 1;
    while(low <= hig){
        int mid = low + (hig - low) / 2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            hig = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}
