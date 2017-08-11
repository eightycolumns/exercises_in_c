abspath_to_makefile := $(abspath $(lastword $(MAKEFILE_LIST)))
makefile_dir := $(patsubst %/,%,$(dir $(abspath_to_makefile)))

CC := gcc
CFLAGS := -std=c99 -pedantic -Wall -Wextra -Werror -O2

executables := $(patsubst %.c,%,$(wildcard $(makefile_dir)/*.c))

.PHONY: all
all: $(executables)

$(executables): %: %.o
	$(CC) $(CFLAGS) -o $@ $<

clean_executables := $(executables:%=clean_%)

objects := $(patsubst %.c,%.o,$(wildcard $(makefile_dir)/*.c))
clean_objects := $(objects:%=clean_%)

.PHONY: clean
clean: $(clean_executables) $(clean_objects)

.PHONY: $(clean_executables)
$(clean_executables):
	rm -f $(@:clean_%=%)

.PHONY: $(clean_objects)
$(clean_objects):
	rm -f $(@:clean_%=%)
