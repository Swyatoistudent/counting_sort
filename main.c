#include <stdio.h>
int max;
unsigned long int array[] = {3,4,1,2,3,0,4,2,1,5,3,2,1,1,22};
int n = sizeof(array)/ sizeof(int);
int main() {
    int sorted[n]; // відсортований масив

    max = array[0]; // максимальне значення масиву для визначення розміру буферного масива

    for(int i=0;i<n;i++){ // визначення макс елементу
        if (array[i]>max)
        {
            max=array[i];
        }
    }
    int a[max+1];

    for(int i =0;i<max+1;i++){
       a[i]=0;
    }

    for(int i=0;i<n;i++){
        a[array[i]]+=1;
    }

    int iterator = 0;

        for(int j =0;j<max+1;j++) {
            for(int i=0;i<a[j];i++){

                sorted[iterator]=j;
                iterator++;
            }
        }

    for(int i=0;i<n;i++){
        printf("%d ",sorted[i] );
    }
    return 0;
}