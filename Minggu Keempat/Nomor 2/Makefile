nomor_2: nomor_2.o
	g++ -o nomor_2 nomor_2.o

nomor_2.o: nomor_2.cpp
	g++ -c nomor_2.cpp

.PHONY: test
test: nomor_2
	./nomor_2

.PHONY: clean
clean:
	rm -f nomor_2 nomor_2.o