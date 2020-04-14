CFLAGS    += -std=c99 -Wall -Wextra -pedantic -Wold-style-declaration
CFLAGS    += -Wmissing-prototypes -Wno-unused-parameter
PREFIX    ?= /usr/local
MANPREFIX ?= ${PREFIX}/share/man
BINDIR    ?= $(PREFIX)/bin
CC        ?= gcc

all: config.h sowm

config.h:
	cp config.def.h config.h

sowm:
	$(CC) -O3 $(CFLAGS) -o sowm sowm.c -lX11 $(LDFLAGS)

install: all
	install -Dm755 sowm $(DESTDIR)$(BINDIR)/sowm
	install -Dm644 sowm $(DESTDIR)$(MANPREFIX)/man1/sowm.1

uninstall:
	rm -f $(DESTDIR)$(BINDIR)/sowm \
	      $(DESTDIR)$(MANPREFIX)/man1/sowm.1

clean:
	rm -f sowm *.o
