#include "types.h"
#include "stat.h"
#include "user.h"

//fill array
void fillArray(int vet[],int tamanhoVet){
     int j=0;
     for (int i=tamanhoVet-1;i>0;i--){
        vet[j]=i;
        j=j+1;
    }
}

//bubble sort w/ flag
void bubbleSort(int vet[],int tamanhoVet){
    int flag,backup = 0;
    for(int i = tamanhoVet - 1;i>0;i--){
        flag=0;
        for(int j=0;j<=i-1;j++){
            if (vet[j]>vet[j+1]){
                backup=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=backup;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
}

//selection sort
void selectionSort(int vet[],int tamanhoVet){
    int i = tamanhoVet - 1;
    int minPos,backup = 0;
    for (int j=0;j<=i-1;j++){
        minPos=j;
        for (int k=minPos+1;k<=i;k++){
            if(vet[k]<vet[minPos]){
                minPos=k;
            }
        }
        backup=vet[j];
        vet[j]=vet[minPos];
        vet[minPos]=backup;
    }
}

void callSorts(){    
    int array[980];
    fillArray(array,980);
    bubbleSort(array,980);
    fillArray(array,980);
    selectionSort(array,980);
    fillArray(array,980);
    bubbleSort(array,980);
    fillArray(array,980);
    selectionSort(array,980);
    fillArray(array,980);
    bubbleSort(array,980);
    fillArray(array,980);
    selectionSort(array,980);
    fillArray(array,980);
    bubbleSort(array,980);
    fillArray(array,980);
    selectionSort(array,980);
    fillArray(array,980);
    bubbleSort(array,980);
    fillArray(array,980);
    selectionSort(array,980);
    fillArray(array,980);
    bubbleSort(array,980);
    fillArray(array,980);
    selectionSort(array,980);
    fillArray(array,980);
    bubbleSort(array,980);
    fillArray(array,980);
    selectionSort(array,980);
    fillArray(array,980);
    bubbleSort(array,980);
    fillArray(array,980);
    selectionSort(array,980);
    fillArray(array,980);
    bubbleSort(array,980);
    fillArray(array,980);
    selectionSort(array,980);
    fillArray(array,980);
    bubbleSort(array,980);
    fillArray(array,980);
    selectionSort(array,980);
    fillArray(array,980);
    bubbleSort(array,980);
    fillArray(array,980);
    selectionSort(array,980);
    fillArray(array,980);
    bubbleSort(array,980);
    fillArray(array,980);
    selectionSort(array,980);
}

void wastetime(){
    callSorts();
    callSorts();
    callSorts();
    callSorts();
    callSorts();
    callSorts();
    callSorts();
    callSorts();
    callSorts();
}


int main(int argc, char *argv[]){ 
    int tickets = 25;
    for (int i = 1; i < 4; i ++){
        if(fork(tickets*i)==0){
            wastetime();
            printf(1, "End of process %d. \n", i);
            exit();
        }
    }  

    wait();
    exit();
} 