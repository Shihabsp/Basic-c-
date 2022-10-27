// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

void print(int arr[], int sizeOfArray)
{
	for(int i = 0; i<sizeOfArray; i++)
	{
		cout << arr[i] << " ";
	}
}
void bubble_sort(int arr[], int sizeOfArray)
{
	int count = 1;
	long swap_count = 0;
	while(count!=0){
	    count = 0;
	    for (int i=0; i<sizeOfArray; i++)
	    {
	    	if(arr[i]>arr[i+1])
	        {
	        	swap(arr[i], arr[i+1]);
	        	count++;
	        	swap_count++;
	        }
	    }
	}
	cout << "\nTotal swap : " << swap_count << endl;
	cout << "Bubble Sorted array : ";
	print(arr, 100);
	
}

void selection_sort(int arr[], int sizeOfArray)
{
    long swapCount = 0;
    for(int i=0; i<sizeOfArray; i++)
    {
        int temp = i;
         for(int j=i; j<sizeOfArray; j++)
         {
             if(arr[temp] > arr[j])
             {
                 temp = j;
                 swapCount++;
             }
         }
         swap(arr[i], arr[temp]);
    }
    cout << "\nTotal swap for selection sort: " << swapCount << endl;
    cout << "Selection sorted array: ";
    print(arr, 100);
}

void insertion_sort(int arr[], int sizeOfArray)
{
    int swapCount=0;
    for(int i=1; i<sizeOfArray; i++)
    {
        for(int j=i-1; j>=0; j--)
        {
            if(arr[i]<arr[j])
            {
                swap(arr[i], arr[j]);
                swapCount++;
                
            }
        }
    }
    cout << "\nTotal swap for Insertion sort : " << swapCount << endl;
    cout << "Insertion sorted array: ";
    print(arr, sizeOfArray);
}

int main()
{
    float time=0;
    int* array1 = new int[100000];
    for(int i=0; i < 100000; i++)
    {
        array1[i] = rand();
    }
    
    int* array2 = new int[100000];
    for(int i=0; i < 100000; i++)
    {
        array2[i] = rand();
    }
    
    int* array3 = new int[100000];
    for(int i=0; i < 100000; i++)
    {
        array3[i] = rand();
    }
    
    int* array4 = new int[100000];
    for(int i=0; i < 100000; i++)
    {
        array4[i] = rand();
    }
    clock_t t1 = clock();
    bubble_sort(array1, 100000);
    clock_t t2 = clock();
    cout << "Time taken for dataset1 : " << (float)(t2-t1)/CLOCKS_PER_SEC <<endl;
    
    bubble_sort(array2, 100000);
    clock_t t3 = clock();
    cout << "Time taken for dataset1 : " << (float)(t3-t2)/CLOCKS_PER_SEC <<endl;
    
    bubble_sort(array3, 100000);
    clock_t t4 = clock();
    cout << "Time taken for dataset1 : " << (float)(t4-t3)/CLOCKS_PER_SEC <<endl;
    
    bubble_sort(array4, 100000);
    clock_t t5 = clock();
    cout << "Time taken for dataset1 : " << (float)(t5-t4)/CLOCKS_PER_SEC <<endl;

    clock_t t6 = clock();    
    selection_sort(array1, 100000);
    clock_t t7 = clock();
    cout << "Time taken for dataset1 : " << (float)(t7-t6)/CLOCKS_PER_SEC <<endl;
    
    selection_sort(array1, 100000);
    clock_t t8 = clock();
    cout << "Time taken for dataset1 : " << (float)(t8-t7)/CLOCKS_PER_SEC <<endl;
    
    selection_sort(array1, 100000);
    clock_t t9 = clock();
    cout << "Time taken for dataset1 : " << (float)(t9-t8)/CLOCKS_PER_SEC <<endl;
    
    selection_sort(array1, 100000);
    clock_t t10 = clock();
    cout << "Time taken for dataset1 : " << (float)(t10-t9)/CLOCKS_PER_SEC <<endl;
    
    clock_t t11 = clock();
    insertion_sort(array1, 100000);
    clock_t t12 = clock();
    cout << "Time taken for dataset1 : " << (float)(t12-t11)/CLOCKS_PER_SEC <<endl;
    
    insertion_sort(array2, 100000);
    clock_t t13 = clock();
    cout << "Time taken for dataset1 : " << (float)(t13-t2)/CLOCKS_PER_SEC <<endl;
    
    insertion_sort(array3, 10000);
    clock_t t14 = clock();
    cout << "Time taken for dataset1 : " << (float)(t14-t3)/CLOCKS_PER_SEC <<endl;
    
    insertion_sort(array4, 10000);
    clock_t t15 = clock();
    cout << "Time taken for dataset1 : " << (float)(t15-t4)/CLOCKS_PER_SEC <<endl;

    return 0;
}
