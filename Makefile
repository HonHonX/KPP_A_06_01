default: nd

nd.o : nd.c
  gcc -c nd.c -o nd.o
   
nd : nd.o
  gcc nd.o -o nd
   
clean: 
  rm -f nd.o
  rm -d nd
