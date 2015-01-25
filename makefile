all: pang
pang: pang.o func.o room.o navi.o
	g++ room.o func.o navi.o pang.o -o pang
pang.o: pang.cpp
	g++ -c pang.cpp
func.o: func.cpp
	g++ -c func.cpp
room.o: room.cpp
	g++ -c room.cpp
navi.o: navi.cpp
	g++ -c navi.cpp
