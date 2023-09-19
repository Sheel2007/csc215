87 # Add A
FE # CPI
00
C2 # JNZ (Jump if not Zero)
08
00
C6 # ADI (Add Immediate and carry to accumulator)
01
D3 # OUT
FF # RST 7 (Restart Instruction)
32
40
00
3A # LDA (Load accumulator direct)
50
00
C6 # ADI (Add Immediate and carry to accumulator)
01
FE # ADI (Add Immediate and carry to accumulator)
FF # CPI
C2 # JNZ (Jump if not Zero)
10
00
3A # LDA (Load accumulator direct)
40
00
C3 # JMP
00
00
===
40:00
41:00
50:00
51:00
