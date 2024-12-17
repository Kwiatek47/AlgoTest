all: program

run_generator: 
	g++  src/generator.cpp -o generator.exe
	./generator.exe

run_solution:
	g++  src/solution.cpp -o solution.exe
	./solution.exe

run_brute_force:
	g++  src/brute_force.cpp -o brute_force.exe
	./brute_force.exe

clean:
	rm -f generator.exe solution.exe brute_force.exe

program: run_generator run_brute_force run_solution clean



