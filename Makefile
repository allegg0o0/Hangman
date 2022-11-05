.PHONY: clean main
CFLAGS = -Wall -Wextra -Werror -g
CPPFLAGS = -MMD

bin/main:  obj/src/hangman/main.o obj/src/libhangman/lib_hangman.a
	gcc $(CFLAGS) -I src/ -o $@ $^

bin/test: obj/test/main.o obj/test/test.o obj/src/libhangman/lib_hangman.a
	gcc $(CFLAGS) -I src/ -o $@ $^

obj/src/libhangman/lib_hangman.a: obj/src/libhangman/word_guessing.o obj/src/libhangman/choice_word.o obj/src/hangman/output.o obj/src/hangman/printCorrect.o obj/test/test.o
	ar src $@ $^

obj/src/libhangman/word_guessing.o: src/libhangman/word_guessing.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src/ -o $@ $<

obj/src/libhangman/choice_word.o: src/libhangman/choice_word.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src/ -o $@ $<

obj/src/hangman/main.o: src/hangman/main.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src/ -o $@ $<
	
obj/src/hangman/output.o: src/libhangman/output.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src/ -o $@ $<

obj/src/hangman/printCorrect.o: src/libhangman/printCorrect.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src/ -o $@ $<

obj/test/test.o: test/test.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I header_test/ -I src/ -o $@ $<

obj/test/main.o: test/main.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I header_test/ -I src/ -o $@ $<

clean:
	rm obj/src/hangman/*.o
	rm obj/src/libhangman/*.o
	rm obj/src/hangman/*.d
	rm obj/src/libhangman/*.d
	rm obj/test/*.o
	rm obj/test/*.d
	rm obj/src/libhangman/lib_hangman.a
	rm bin/*

run/main:
	./bin/main

run/test:
	./bin/test
	