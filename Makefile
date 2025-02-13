CXX = g++
CXXFLAGS = -std=c++11

ifeq ($(USE_FLOAT), true)
	ifeq ($(USE_DOUBLE), true)
		$(error Cannot set both USE_FLOAT and USE_DOUBLE to true)
	endif
	CXXFLAGS += -DUSE_FLOAT
endif

ifeq ($(USE_DOUBLE), true)
	CXXFLAGS += -DUSE_DOUBLE
endif

all: sum_of_sin

sum_of_sin: main.o
	$(CXX) $(CXXFLAGS) -o sum_of_sin main.o

main.o: src/main.cpp
	$(CXX) $(CXXFLAGS) -c src/main.cpp -o main.o

clean:
	rm -f main.o sum_of_sin
