#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randArr (int arr[], int uzunlik){
   for (int i=0; i<uzunlik; i++){
     arr[i] = rand()%90+10;
     printf("%d ", arr[i]);
   }
   puts("");
}

void printArr (int arr[], int uzunlik){
   for(int i=0; i<uzunlik; i++){
     printf("%d ", arr[i]);
   }
   puts("");
}

int main(){
   srand(time(NULL));
   int n,start,stop;
   printf("Array uzunligini kiriting:");
   scanf("%d", &n);
   int arr[n];
   randArr(arr, n);

   printf("Startni kiriting:");
   scanf("%d", &start);
   printf("Stopni kiriting:");
   scanf("%d", &stop);


   for(int i=start-1; i<stop-1; i++){
     for(int j=start-1; j<stop-1-i+start-1; j++){
       if(arr[j]>arr[j+1]){
        int son = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = son;
       }
     }
   }
   printArr (arr, n);
}

