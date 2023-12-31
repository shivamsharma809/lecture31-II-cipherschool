#include<iostream>
using namespace std;

void merge(int *arr, int start , int end)
{
   // we need to actually merge the 2 sorted array which we have received.
   // The arr actually has been sorted till start to mid and also from mid to end but, now we need to merge {combine these 2}.
}

void mergesort(int *arr, int start , int end)
{
    // This recursion needs to have a base case :

    // what is the base case : the base case is when there is only 1 element :

    if(start>=end) //This implies there is only 1 element and now we cannot spit it further.
    {
        return;
    }

    int mid;

    mid = (start+end)/2;

    // we are also using the same code to sort the smaller arrays.

    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);

    // But after we have sorted the smaller arrays, we need to merge them to get the bigger array. 

    mergesort(arr,start,end);
}

int main()
{

    int size_arr;

    int arr[5] = {1,5,3,10,4};
    size_arr=5;

    mergesort(arr,0,size_arr-1);

    return 0;
}