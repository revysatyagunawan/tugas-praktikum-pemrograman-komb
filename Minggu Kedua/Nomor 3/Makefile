nomor_3: nomor_3.o
	g++ -o nomor_3 nomor_3.o

nomor_3.o: nomor_3.cpp
	g++ -c nomor_3.cpp

.PHONY: test
test: nomor_3
	./nomor_3

.PHONY: clean
clean:
	rm -f nomor_3 nomor_3.o