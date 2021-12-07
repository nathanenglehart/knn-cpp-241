TARGETS=main
CXX=g++ -std=c++11
INC=-I./includes

all: $(TARGETS)

main: utils.o knn.o main.o
	$(CXX) $(INC) utils.o knn.o main.o -o main

knn.o: utils.o knn.cpp
	$(CXX) $(INC) -c knn.cpp

utils.o: includes/utils.hpp utils.cpp
	$(CXX) $(INC) -c utils.cpp

clean:
	rm -rf $(TARGETS) *.o *.gch
