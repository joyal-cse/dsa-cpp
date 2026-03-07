//program to swap alternate values in a 1-d array
//Example:{1,2,3,4,5}={2,1,4,3,5}

#include<bits/stdc++.h>
using namespace std;

//function to swap alternate values
void swap(int array[], int i)
{
    int temp;
    temp=array[i];
    array[i]=array[i+1];
    array[i+1]=temp;
    
}

int main()
{
    int n;
    cin>>n;//input array size
    
    int arr[n];
    
    for(int i=0;i<n;i++)//input array elements
    {
        cin >> arr[i];
    }
    
    for(int i=0;i<n-1;i++)
    {
       
         if(i%2 == 0)//swaps alternate indexes
        {
            swap(arr,i);//calling the function
            }
    }
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";//printing the swapped array values
    }
    return 0;
    
}
