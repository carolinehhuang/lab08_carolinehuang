lab08: recLinkedListFuncs.o strFuncs.o tddFuncs.o llTests.o linkedListFuncs.o
	g++ $^ -o lab08

clean:
	rm *.o lab08

