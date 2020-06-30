GCC = g++
GCC_FLAGS = -I include -std=c++11
PROGRAM = diary

$(PROGRAM): App.o Date.o Diary.o Main.o Time.o
	echo "=== COMPILANDO ===="
	$(GCC) $(GCC_FLAGS) -o $(PROGRAM) App.o Date.o Diary.o Main.o Time.o

App.o: src/App.cpp include/App.h
	$(GCC) $(GCC_FLAGS) -c src/App.cpp

Date.o: src/Date.cpp include/Date.h
	$(GCC) $(GCC_FLAGS) -c src/Date.cpp

Diary.o: src/Diary.cpp include/Diary.h
	$(GCC) $(GCC_FLAGS) -c src/Diary.cpp

Main.o: src/Main.cpp include/App.h
	$(GCC) $(GCC_FLAGS) -c src/Main.cpp

Time.o: src/Time.cpp include/Time.h
	$(GCC) $(GCC_FLAGS) -c src/Time.cpp
