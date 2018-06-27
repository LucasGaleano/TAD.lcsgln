

all: libtad-lcsgln.so	

stack:
	cd collections/; gcc -c -fPIC -Wall  stack.c

bst:
	cd collections/; gcc -c -fPIC -Wall  bst.c

libtad-lcsgln.so: stack bst
	cd collections/; gcc -shared -o libtad-lcsgln.so bst.o stack.o
	sudo cp -u collections/libtad-lcsgln.so /usr/lib
	cd /usr/include; sudo mkdir tad-lcsgln
	sudo cp -u collections/*.h /usr/include/tad-lcsgln/

prueba:
	gcc prueba.c -o prueba -ltad-lcsgln

clean:
	rm -f collections/stack.o
	rm -f collections/bst.o
	sudo rm -f /usr/lib/libtad-lcsgln.so
	sudo rm -rf /usr/include/tad-lcsgln
