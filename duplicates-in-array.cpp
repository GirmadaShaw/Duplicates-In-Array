/*
Given an array of n elements that contains elements from 0 to n-1, 
with any of these numbers appearing any number of times. 
Find these repeating numbers in O(n) and using only constant memory space.
Input : n = 7 and array[] = {1, 2, 3, 6, 3, 6, 1}
Output: 1, 3, 6
*/


#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 6, 3, 6, 1} ;
    int size = sizeof(arr)/sizeof(int) ;

//Solution 1
//Time Complexity: O(n^2) , Space Complexity: O(1) 

    for ( int i=0 ; i<size ; i ++)
    {
        for ( int j=i+1 ; j<size ; j ++)
        {
            if ( arr[i] == arr[j] )
            {
                std::cout << arr[i] << " ";
            }
        }
    }

std::cout << std::endl ; 

//Solution 2
//Time Complexity: O() , Space Complexity: O() 

    for (int i = 0; i < size; i++) {
        arr[arr[i] % size] = arr[arr[i] % size] + size;
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] >= size * 2) {
            std::cout << i << " " ;
        }
    }

}