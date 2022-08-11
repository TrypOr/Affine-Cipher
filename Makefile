#Use to compile program and run
all:
	make Affine_cipher && make run
#Use to compile	
Affine_cipher:
	gcc -Wall -pedantic -o Affine_cipher Affine_cipher.c
#Use to run executable	
run:
	./Affine_cipher
#Use to delete executable	
clean:
	rm Affine_cipher