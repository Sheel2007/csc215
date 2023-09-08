# PART 1 INTRODUCTION

The ALTAIR 8800 is the **“most economical computer ever”** and the first available in both kit and assembled form. The heart of the ALTAIR 8800 is Intel Corporation’s Model 8080 Microcomputer, a complete Central Processing Unit on a single silicon chip.

**Part 1**

- Prepares the user for better understanding computer terminology, technology, and operation with an introduction to conventional and electronic logic.

- Provides discussion of basic programming, and a discourse on computer languages.

**Part 2 & 3**

- describes the organization and operation of the ALTAIR 8800.

**Part 4**

- presents a detailed listing of the ALTAIR 8800’s 78 instructions.

## A. LOGIC

| Conditions      | Output |
| --------------- | ------ |
| False and False | False  |
| False and True  | False  |
| True and False  | False  |
| True and True   | True   |

| Input   | Output |
| ------- | ------ |
| 0 and 0 | 0      |
| 0 and 1 | 0      |
| 1 and 0 | 0      |
| 1 and 1 | 1      |

## B. ELECTRONIC LOGIC

| AND Gate | Output |
| -------- | ------ |
| 0 and 0  | 0      |
| 0 and 1  | 0      |
| 1 and 0  | 0      |
| 1 and 1  | 1      |

| OR Gate | Output |
| ------- | ------ |
| 0 and 0 | 0      |
| 0 and 1 | 1      |
| 1 and 0 | 1      |
| 1 and 1 | 1      |

| NOT Gate | Output |
| -------- | ------ |
| 0        | 1      |
| 1        | 0      |

| NAND Gate | Output |
| --------- | ------ |
| 0 and 0   | 1      |
| 0 and 1   | 1      |
| 1 and 0   | 1      |
| 1 and 1   | 0      |

| NOR Gate | Output |
| -------- | ------ |
| 0 and 0  | 1      |
| 0 and 1  | 0      |
| 1 and 0  | 0      |
| 1 and 1  | 0      |

| A and B | A+B |
| ------- | --- |
| 0 and 0 | 00  |
| 0 and 1 | 01  |
| 1 and 0 | 01  |
| 1 and 1 | 10  |

## C. NUMBER SYSTEMS

The normal number system is base 10.

But binary is base two (ones and zeroes)

## D. THE BINARY SYSTEM

| Decimal | Binary |
| ------- | ------ |
| 0       | 00     |
| 1       | 1      |
| 2       | 10     |
| 3       | 11     |
| 4       | 100    |
| 5       | 101    |
| 6       | 110    |
| 7       | 111    |
| 8       | 1000   |
| 9       | 1001   |
| 10      | 1010   |
| 11      | 1011   |
| 12      | 1100   |
| 13      | 1101   |
| 14      | 1110   |
| 15      | 1111   |
| 16      | 10000  |
| 17      | 10001  |
| 18      | 10010  |
| 19      | 10011  |
| 20      | 10100  |

1011 = [(1 * 2^4) + (0 * 2^3) + (0 * 2^2) + (1 * 2^1) + (1*2^0)]

1011 = [16+0+0+2+1]

1011 = 19