exec_name := words

.PHONY: all zip clean

all: $(exec_name)

zip: $(exec_name)
	zip $(exec_name).zip $(exec_name)

$(exec_name): main.c
	gcc -o $(exec_name) main.c

clean:
	rm -f $(exec_name) $(exec_name).zip
