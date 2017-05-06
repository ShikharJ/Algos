/*
Shell Sort
----------
An in-place comparison sort. It can be seen as either a generalization 
of bubble sort or insertion sort, but faster than both. The method starts 
by sorting pairs of elements far apart from each other, then progressively 
reducing the gap between elements to be compared. Starting with far apart 
elements, it can move some out-of-place elements into position faster than a 
simple nearest neighbor exchange. The running time of Shellsort is heavily 
dependent on the gap sequence it uses. For many practical variants, 
determining their time complexity remains an open problem.
The original 1959 algorithm is implemented here (using shell sequence).
Use order = +/- 1 for increasing and decreasing orders respectively.
----------
Time Complexity : Best Case : O(n*logn)
                  Average and Worst Case : O(n^2)
Space Complexity : O(1)
Stable : No
In-Place : Yes
Online : No
*/

