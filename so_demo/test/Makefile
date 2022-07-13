# 说明：
#	1. 需要使用-lxxx来表明需要使用libxxx.so
#	2. 在lib_tiger中已经将libtiger.so和头文件放到系统能搜索到的目录了

CFLAGS += -g -Wall -ltiger

all: build

build: test

test: main.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f test

.PHONY: all build clean
