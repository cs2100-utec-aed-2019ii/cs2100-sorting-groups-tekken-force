test: FORCE
	g++ main.cpp Shell.cpp Shell.h Insertion.cpp Bubble.cpp Bubble.h Insertion.h Sorting.h Sorting.cpp  -o test

FORCE: ;

clean:
	rm test
