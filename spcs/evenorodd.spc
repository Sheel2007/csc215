3A #Load A from 47
47
00
06 #Set B to 1
01
A0 #Do AND operation on A and B
3A #Load A from 47 again
47
00
CA #Jump to 11 if 0
11
00
87 #Add A to itself
32 #Store to 47
47
00
76 #Halt
0F #Shift the bits of A to the right (divide by 2)
32 #Store to 47
47
00
76 #Halt
===
47:11
