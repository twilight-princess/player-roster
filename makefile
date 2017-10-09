Driver: Driver.o Player.o 
	g++ Driver.cpp -o Driver

Player.o: Player.cpp Player.h
	g++ -c Player.cpp

clean:
	rm -f *.o
	rm Driver
	
run: Driver
	./Driver


java:
	javac Driver.java
	javac Player.java
 
