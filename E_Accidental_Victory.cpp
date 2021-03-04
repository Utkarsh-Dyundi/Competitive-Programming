#include<bits/stdc++.h>
using namespace std;

void swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int partition(int arr[],int l,int h){
    int pivot=arr[h];
    int i=l;
    int j=h-1;
    while(i<j){
        while(i<=h){
            if(arr[i]>pivot)
            break;
            i++;
        }
        while(j>l){
            if(arr[j]<=pivot)
            break;
            j--;
        }
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }

    arr[h]=arr[j];
    arr[j]=pivot;
	return (j);
}

void  randomisation(int arr[],int low,int high){
    int n=high-low+1;
    int temp=rand()%n;
    swap(&arr[temp],&arr[high]);
}

void quickSort(int arr[],int l,int h){
    if(l<h){
        randomisation(arr,l,h);
        int pivotIndex=partition(arr,l,h);
        quickSort(arr,l,pivotIndex-1);
        quickSort(arr,pivotIndex+1,h);
    }
}

void display(int array[],int length){
    for(int i=0;i<length;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
            cin>>ar[i];
    }
    quickSort(ar,0,n-1);
    cout<<"The Sorted Array is:"<<endl;
    display(ar,n);
    return 0;
}