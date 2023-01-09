default: nd

nd: nd.o
  gcc nd.o -o nd

nd.o: nd.c
  gcc -c nd.c -o nd.o 
   
clean: 
  rm -f nd.o
  rm -d nd
