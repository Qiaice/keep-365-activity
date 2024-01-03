void ShellSort(int *arr, int len) {
    for(int gap = len / 2; gap > 0; gap /= 2){
        for(int i = 0; i < gap; i++){
            for(int j = i + gap; j < len; j += gap){
                int tmp = arr[j];
                int index = j - gap;
                while(index >= 0 && arr[index] > tmp){
                    arr[index + gap] = arr[index];
                    index -= gap;
                }
                arr[index + gap] = tmp;
            }
        }
    }
}
