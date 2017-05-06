/*
Selection Sort
--------------
A simple in-place comparison sorting algorithm. It sorts a list by 
finding the smallest / largest element (considering sorting order) from
the unsorted sublist and swapping it with the leftmost unsorted element, 
moving the sublist boundaries one element to the right.
Performs worst than insertion sort, but has advantaages in situations
where auxiliary memory is limited.
Use order = +/- 1 for increasing and decreasing orders respectively.
--------------
Time Complexity : Best, Average and Worst Case : O(n^2)
Space Complexity : O(1)
Stable : Yes
In-Place : Yes
Online : No
*/

#include <iostream>
#include <vectot>

using namespace std;

void selection_sort(vector<int> v, int order){
    size_t position;
    for (size_t i = 0; i < v.size() - 1; i++){
        position = i;
        for (size_t j = i + 1; j < v.size(); j++){
            if (order * v[position] > order * v[j]){
                position = j;
            }
        }
        if (position != i)
            swap(v[i], v[position]);
    }
}
