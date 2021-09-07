all: libntp.a headers

headers: ntp.h

ntp.h: ntp.c
	./genheaders.sh

libntp.a: ntp.o
	ar rcs libntp.a $<

.PHONY: clean
clean:
	rm -f ntp.o libntp.a ntp.h
