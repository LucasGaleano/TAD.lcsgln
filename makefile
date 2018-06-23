

all: node stack bst

node:
	cd collections/; gcc -c node.h -o node

stack:
	cd collections/; gcc -c stack.c -o stack

bst:
	cd collections/; gcc -c bst.c -o bst

prueba:
	gcc prueba.c -o prueba collections/stack collections/bst

clean:
	rm collections/node
	rm collections/stack
	rm collections/bst
