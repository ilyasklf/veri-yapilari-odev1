hepsi: derle calistir

derle:
	g++ -I./include/ -o ./lib/Node.o -c ./src/Node.cpp
	g++ -I./include/ -o ./lib/LinkedList.o -c ./src/LinkedList.cpp
	g++ -I./include/ -o ./lib/ANode.o -c ./src/ANode.cpp
	g++ -I./include/ -o ./lib/ALinkedList.o -c ./src/ALinkedList.cpp
	g++ -I./include/ -o ./lib/Test.o -c ./src/Test.cpp

	g++ -I./include/ -o ./bin/Test ./lib/Node.o ./lib/LinkedList.o  ./lib/ANode.o ./lib/ALinkedList.o  ./src/Test.cpp

calistir:
	./bin/Test
