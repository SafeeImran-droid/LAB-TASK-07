#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[5];
    int i;
    int sr_val = 2;
    int count = 0;
    //size of array
    int n = sizeof(arr)/sizeof(arr[0]);
	for(i = 0; i < n ;i++){
		printf("ENTER NUMBERS : ");
		scanf("%d", &arr[i]);
    }
	for(i = 0; i <= n; i++){
        if(i==sr_val){
            count+=1;
        }
    }
    if(!count){
        printf("NUMBER NOT FOUND");
    }
    else{
        printf("%d", count + 1);
    }

}
