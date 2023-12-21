void Swap(int *n1, int *n2){
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

void QuickSort(int *arr, int start, int end){
    if(start >= end){
        return;
    }
    int base = arr[start];
    int low = start;
    int hig = end;
    while(low < hig){
        while(low < hig && arr[hig] >= base){
            hig--;
        }
        while(low < hig && arr[low] <= base){
            low++;
        }
        Swap(&arr[low], &arr[hig]);
    }
    Swap(&arr[start], &arr[low]);
    QuickSort(arr, start, low - 1);
    QuickSort(arr, hig + 1, end);
}
