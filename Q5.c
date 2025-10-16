#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[10];
    int i;

    //size of array
    int n = sizeof(arr)/sizeof(arr[0]);
	for(i = 0; i < n ;i++){
		printf("ENTER NUMBERS : ");
		scanf("%d", &arr[i]);
    }
    int max = arr[0]

    for(i = 1; i < n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int min = arr[0]
    
    for(i = 1; i<n; i++){
        if(arr[i]>min){
            min = arr[i];
        }
    }
    printf("%d", (max - min));
	
}
