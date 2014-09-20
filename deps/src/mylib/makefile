all: libmylib.so libmylib.so.1

libmylib.so: libmylib.so.1.0.0
	ln -s libmylib.so.1.0.0 ../../usr/lib/libmylib.so

libmylib.so.1: libmylib.so.1.0.0
	ln -s libmylib.so.1.0.0 ../../usr/lib/libmylib.so.1

libmylib.so.1.0.0: mylib.o
	gcc -shared -Wl,-soname,libmylib.so.1 -o ../../usr/lib/libmylib.so.1.0.0 \
mylib.o

mylib.o:
	gcc -c -fPIC mylib.c

clean:
	rm -rf ../../usr/lib/libmylib.* *.o
