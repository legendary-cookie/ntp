all: ntpclient

ntpclient: client.c ../lib/libntp.a
	$(CC) -o $@ $^

../lib/libntp.a:
	$(MAKE) -C ../lib libntp.a
