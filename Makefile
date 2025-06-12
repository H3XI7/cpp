CXX=g++
CXXFLAGS=-O2 -Wall -std=c++17
OBJ=main.o Pracownik.o Programista.o Tester.o Kierownik.o Dyrektor.o Stazysta.o
TARGET=app

all: $(OBJ)
	$(CXX) -o $(TARGET) $(OBJ)

main.o: main.cpp Pracownik.hpp Programista.hpp Tester.hpp Kierownik.hpp Dyrektor.hpp Stazysta.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Pracownik.o: Pracownik.cpp Pracownik.hpp
	$(CXX) $(CXXFLAGS) -c Pracownik.cpp

Programista.o: Programista.cpp Programista.hpp Pracownik.hpp
	$(CXX) $(CXXFLAGS) -c Programista.cpp

Tester.o: Tester.cpp Tester.hpp Pracownik.hpp
	$(CXX) $(CXXFLAGS) -c Tester.cpp

Kierownik.o: Kierownik.cpp Kierownik.hpp Pracownik.hpp
	$(CXX) $(CXXFLAGS) -c Kierownik.cpp

Dyrektor.o: Dyrektor.cpp Dyrektor.hpp Kierownik.hpp Pracownik.hpp
	$(CXX) $(CXXFLAGS) -c Dyrektor.cpp

Stazysta.o: Stazysta.cpp Stazysta.hpp Programista.hpp Pracownik.hpp
	$(CXX) $(CXXFLAGS) -c Stazysta.cpp

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean