#include <stdio.h>
#define swap(x,y,t) (t)=(y) (y)=(x) (x)=(t)

int quicksort(int list[], left,right) {
    do {
            int temp;
    int low = left;
    int high =right+1;
    int pibot = list[0];
    do {
        low++;
    }while (list[low] < pibot)
    do{
        high--;
    }while(list[high]>pibot)

    if(low<high) {
        swap(list[low], list[high], temp);
    }
    }while (low<high)
    swap(left, high, temp);
    return high;
}

int sort(int list[], int left, int right) {
    if (left<right) {
        int mid = quicksort(list, left, right);
        sort(list, left, mid-1);
        sort(list, mid+1, right);
    }
}

int main() {
    int arr[5] = {0,5,3,4,1};
    sort(arr,0 ,4);
}
