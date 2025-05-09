#preprocessor (.c -> .i)
#gcc -E hi.c -o hi.i
#creates hi.i

#Compiler (.i -> .s)
#gcc -s hi.i
#creates hi.s

#Assembler (.s -> .o)
#gcc -c hi.s
#creates hi.o

#linker  (.o)
#creates hi
