hey: one two
	# Outputs "hey", since this is the target name
	echo $@
	# Outputs all prerequisites newer than the target
	echo $?
	# Outputs all prerequisites
	echo $^
	touch hey

one:
	touch two

two:
	touch two

clean:
	rm -rf hey one two
