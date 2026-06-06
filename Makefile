CC = gcc
CFLAGS= -Wall -Wextra -pedantic -std=c99 -g

.PHONY: clean
clean:
	@echo "Cleaning up executables..."
	find . -type f -executable -not -path '*/.*' -delete
