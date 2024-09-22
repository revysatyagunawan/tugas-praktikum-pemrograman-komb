nomor_1: nomor_1.o
	g++ -o nomor_1 nomor_1.o

nomor_1.o: nomor_1.cpp
	g++ -c nomor_1.cpp

.PHONY: test
test: nomor_1
	./nomor_1

.PHONY: clean
clean:
	rm -f nomor_1 nomor_1.o