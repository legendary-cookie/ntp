all: libntp.a

libntp.a: ntp.o
	ar rcs libntp.a $<

.PHONY: clean
clean:
	rm -f ntp.o libntp.a
