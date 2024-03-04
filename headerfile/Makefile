build_and_run:myprogram run

myprogram: headers main
	g++ ./lib/newHeader.o ./lib/main.o -o ./bin/program
headers:
	g++ -I "./include" -c ./src/newHeader.cpp -o ./lib/newHeader.o
main:
	g++ -I "./include" -c ./src/main.cpp -o ./lib/main.o
run:
	./bin/program.exe
