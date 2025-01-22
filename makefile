exec_name := words

.PHONY: all zip clean install

all: $(exec_name)

zip: $(exec_name)
	zip $(exec_name).zip $(exec_name)

install: $(exec_name)
	sudo cp $(exec_name) /usr/bin/$(exec_name)

$(exec_name): main.c
	gcc -o $(exec_name) main.c

clean:
	rm -f $(exec_name) $(exec_name).zip
