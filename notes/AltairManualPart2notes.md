# Part 2 ORGANIZATION OF THE ALTAIR 8800

## A. CENTRAL PROCESSING UNIT (CPU)

The Central Processing Unit (CPU) performs all calculations, makes all decisions, controls access to the computer by input and output devices, stores and retrieves data from the memory, and coordinates the orderly execution of a program. The CPU is quite literally the heart of the computer.

## B. MEMORY

Access to the memory is always controlled by the CPU.* 16 address lines called the Address Bus connect the CPU to the Memory. These lines permit the CPU to input or output data to or from any memory address. The addresses are specified by two 8-bit bytes. The CPU processes each address as two sequential (serial) cycles, each containing 8-parallel bits. Data stored in the Memory is exchanged between the Memory and CPU via 8 data lines called the Data Bus. This interconnection format permits parallel operation. Thus, when data is read from or written to Memory by the CPU, it is transmitted as a complete 8-bit word.

## C. CLOCK

A program executed by the CPU is controlled by a crystal controlled clock. Crystal control is used to permit the clock to operate at the maximum CPU speed. A clock without crystal regulation might occassionally speed up beyond the CPU’s ability and program would generate errors.

## D. INPUT/OUTPUT

The ALTAIR 8800 will service up to 256 Input and 256 Output devices. The CPU manages all of these devices. Inputs go in to a program and outputs are the result of the program.