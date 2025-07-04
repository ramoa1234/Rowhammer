

My attempt at a row hammer attack

TODO
UNDERSTAND HOW VIRTUAL MEMORY PLAYS INTO THIS
AND HOW YOU SET IT UP TO READ MEMORY YOU DON'T HAVE ACCESS TO 
Transalte from arm unix to windows

ROW PRESS
CVE-2023-0386
https://www.cyberdefensemagazine.com/nethammer-exploiting-rowhammer-attack-through-network-without-a-single-attacker-controlled-line-of-code/

refernce(POC)
https://github.com/google/rowhammer-test/blob/master/double_sided_rowhammer.cc#L246
In js
https://github.com/isec-tugraz/rowhammerjs
Network
https://github.com/CMU-SAFARI/RowPress

https://security-tracker.debian.org/tracker/source-package/linux
https://news.ycombinator.com/item?id=39165342

Attack Breakdown
setup mapping
-reserve a block of memory and fill it with values.(learn for windows)
-rows are memory in ram, that is a collection of memory pages(since rows are bigger). They are also matrices

HammerAllReachAblePages
-vector that is going to store pages. And get physical, and virtual address, row index, page frame number
-Established connection between virtual and physical addresses
-checks the rows you can iterate and its pages
-Iterate pages(1, 2), and use HammerAddressStandard
-check to see if anything has been leaked

-try to recreate what you can from the bits that were leaked 


HammerAddressStandard
-Use asm to flush ram. Forcing the memory to be read from RAM




cpython = bytecode
