

all: libtad-lcsgln.so	

obj.o:
	cd collections/; gcc -c -fPIC -Wall  stack.c
	cd collections/; gcc -c -fPIC -Wall  bst.c
	cd collections/; gcc -c -fPIC -Wall trie.c


libtad-lcsgln.so: obj.o
	cd collections/; gcc -shared -g -o libtad-lcsgln.so bst.o stack.o trie.o
	sudo cp -u collections/libtad-lcsgln.so /usr/lib
	cd /usr/include; sudo mkdir tad-lcsgln
	sudo cp -u collections/*.h /usr/include/tad-lcsgln/

prueba:
	gcc prueba.c -o prueba -ltad-lcsgln

clean:
	rm -f collections/stack.o
	rm -f collections/bst.o
	rm -f collections/trie.o
	rm -f collections/libtad-lcsgln.so
	sudo rm -f /usr/lib/libtad-lcsgln.so
	sudo rm -rf /usr/include/tad-lcsgln
