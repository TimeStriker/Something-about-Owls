all: pang
pang: pang.o room.o func.o story.o 
	g++ pang.o room.o func.o story.o -o pang
pang.o: pang.cpp
	g++ -c pang.cpp
func.o: func.cpp
	g++ -c func.cpp
story.o: story.cpp
	g++ -c story.cpp
room.o : room.cpp
	g++ -c room.cpp
