all: pang
pang: pang.o func.o room.o
	g++ pang.o room.o func.o -o pang
pang.o: pang.cpp
	g++ -c pang.cpp
func.o: func.cpp
	g++ -c func.cpp
room.o: room.cpp
	g++ -c room.cpp
