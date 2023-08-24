blah: blah.o
	gcc blah.o -o blah # Runs 3rd

blah.o: blah.c
	gcc -c blah.c -o blah.o # Runs 2nd

# Typical blah.c would already exist, but I want to limit additional required files

blah.c:
	echo "int main() { return 0; }" > blah.c
