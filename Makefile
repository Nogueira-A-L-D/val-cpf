all: cpf

cpf:
	gcc cpf.c -o cpf

test1: cpf
	./cpf <e1.in >s1.out
	diff se1.out s1.out

test2: cpf
	./cpf <e2.in >s2.out
	diff se2.out s2.out

test3: cpf
	./cpf <e3.in >s3.out
	diff se3.out s3.out
