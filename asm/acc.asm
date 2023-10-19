; Constants (#2 means writing to the console)
BDOS EQU 5
PRINT EQU 2

; Start at offset 100 hex
ORG 100H

; Call BDOS to print A
; Arg 1: PRINT
MVI C,PRINT
; Print each character
MVI E,'A'
CALL BDOS
; Print each character
MVI C,PRINT
MVI E,'C'
CALL BDOS
; Print each character
MVI C,PRINT
MVI E,'C'
CALL BDOS

; Go back to the CCP
JMP 0
END
