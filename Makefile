all:
	g++ -ansi -Wall ResidenceDriver.cpp Residence.cpp House.cpp Tent.cpp Apartment.cpp -o Lab10.out
run:
	./Lab10.out
clean:
	rm -rf *.o *~ *#
