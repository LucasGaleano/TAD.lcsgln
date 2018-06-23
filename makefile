

all: stack bst

stack:
	cd collections/; gcc -c stack.c -o stack

bst:
	cd collections/; gcc -c bst.c -o bst

prueba:
	gcc prueba.c -o prueba collections/stack collections/bst	

clean:
	rm collections/stack
	rm collections/bst
