//06.04.2023 Payshanba
//Mavzu: "buble sort" -> pufakchali so'rtlash

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
}

int main(){
   srand(time(NULL));
   int n;
   printf("Array uzunligini kiriting:");
   scanf("%d", &n);
   int arr[n];

   randArr (arr, n);

   for(int i=0; i<n-1; i++){
     for(int j=0; j<n-1-i; j++){
       if(arr[j]<arr[j+1]){
        int son = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = son;
       }
     }
   }
   printArr (arr, n);
}

