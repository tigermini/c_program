# 说明：
#	1. 共享库so文件名必须以lib开头，扩展名必须是.so (硬性规定)，例如:libtiger.so
#	2. 编译的时候，gcc必须加-fPIC选项，目的是使gcc产生与位置无关的代码
#	3. 链接的时候，gcc要使用-shared选项，作用是指示生成一个共享库文件

LIBNAME := libtiger
PATH_INCLUDE := /usr/include/tiger
PATH_LIB := /usr/lib64

all: prebuild build install

prebuild:
	mkdir -p $(PATH_INCLUDE)

build: prebuild libtiger.so

libtiger.so: tiger.c
	$(CC) -fPIC -shared -o $@ $<

install:
	cp -rf ./tiger.h $(PATH_INCLUDE)
	cp -rf ./$(LIBNAME).so $(PATH_LIB)

uninstall:
	rm -rf $(PATH_LIB)/$(LIBNAME).so
	rm -rf $(PATH_INCLUDE)

clean: uninstall
	rm -rf *.so *.o

.PHONY: all prebuild build install uninstall clean
