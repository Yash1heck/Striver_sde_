/*Algorithm: Lexographically next largest permutation.
1)Traverse through the given element[let it be array of elements]and check until a[i]<a[i+1] 
2)If 1) becomes true then that i will be index1.
3)Now start moving from backwards and check if any element has value >element at index1.
4)if its found let it be index2.
5)Now swap the elements at index1 and index2.
6)Finally reverse the whole part that is present after index1. 
ex: '1324' ->1423->1432 1432 is final answer.   
*/ 

