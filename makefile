Driver: Driver.o Player.o Player.class
	g++ Driver.o Player.o -o Driver
	javac Driver.java

Player.o: Player.cpp Player.h
	g++ -c Player.cpp

Driver.o: Driver.cpp
	g++ -c Driver.cpp

Player.class: 
	javac Player.java

clean:
	rm -f *.o
	rm -f *.class
	rm Driver

run: Driver
	./Driver

coffee: Driver
	java Driver
