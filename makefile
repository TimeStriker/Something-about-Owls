all: pang
pang: pang.o func.o 
	g++ pang.o func.o -o pang
pang.o: pang.cpp
	g++ -c pang.cpp
func.o: func.cpp
	g++ -c func.cpp
