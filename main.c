#include <stdio.h>
int max;
unsigned long int array[] = {10,10,100};
int n = sizeof(array)/ sizeof(int);
int main() {
    int sorted[n]; // відсортований масив
int min = array[0]; // мінімальне  значення масиву для визначення розміру буферного масива
    max = array[0]; // максимальне значення масиву для визначення розміру буферного масива

    for(int i=0;i<n;i++){ // визначення макс елементу
        if (array[i]>max)
        {
            max=array[i];
        }
        if (array[i]<min)
        {
            min=array[i];
        }
    }
    int a[max-min]; //буферний масив

    for(int i =0;i<max+1-min;i++){// заповнення буферного масиву нулями
       a[i]=0;
    }

    for(int i=0;i<n;i++){// підрахування кількості елементів
        a[array[i]-min]+=1;
    }

    int iterator = 0;

        for(int j =0;j<max+1-min;j++) {// заповнення выдсортованого масиву
            for(int i=0;i<a[j];i++){

                sorted[iterator]=j+min;
                iterator++;
            }
        }

    for(int i=0;i<n;i++){
        printf("%d ",sorted[i] ); // вивід відсортованого масиву

    }
    printf("\nsize of buffer massive:  %d",sizeof(a)/sizeof(int));
    return 0;
}