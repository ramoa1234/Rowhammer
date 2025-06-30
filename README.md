

My attempt at a row hammer attack

TODO
Understand RAM read and write
Read and write techniques

refernce(POC)
https://github.com/google/rowhammer-test/blob/master/double_sided_rowhammer.cc#L246


setup mapping
-reserve a block of memory and fill it with values.(learn for windows)
-rows are memory in ram, that is a collection of memory pages(since rows are bigger)

HammerAllReachAblePages
-vector that is going to store pages. Get physical, and virtual address, row index, page frame number
-Connects all the virtual addresses to there physical ones. By connecting to endpoint for Virual memory management and checking were it goes

-checks the rows you can iterate and its pages
-





cpython = bytecode
