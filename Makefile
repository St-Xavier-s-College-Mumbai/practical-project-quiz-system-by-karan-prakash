.PHONY: build-prod, build-dev, prod, dev, clean

SHELL := /bin/bash # Use bash syntax

clean:
	rm -rf dist && mkdir dist

build-dev:
	# On windows:
	# gcc -std=gnu99 ./src/main.c  -Wall ./src/questionset.c  -lDbgHelp -o ./dist/app.bin
	gcc -std=gnu99 ./src/main.c -Wall ./src/questionset.c  -lm -lpthread -o ./dist/app-dev.bin -g

build-prod:
	gcc -std=gnu99 ./src/main.c -Wall ./src/questionset.c  -lm -lpthread -o ./dist/app-prod.bin -s

dev:build-dev
	./dist/app-dev.bin

prod:build-prod
	./dist/app-prod.bin

