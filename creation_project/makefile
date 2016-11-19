#creates the executable from the object file
creationTest: creation_project.o
	g++ -Wall -g -o creationTest creation_project.o
	
#creates the creation_project object file
creation_project: creation_project.cpp creation_project.h
	g++ -Wall -g -c creation_project.cpp

#cleans up old .o files	
clean:
	rm *.o *Test 