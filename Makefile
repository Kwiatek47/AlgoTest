compile_GSB:							# GSB - generator solution brute_force compiler
	g++  src/generator.cpp -o generator.exe
	g++  src/brute_force.cpp -o brute_force.exe
	g++  src/solution.cpp -o solution.exe

run_GSB:							# Run GSB
	./generator.exe
	./brute_force.exe
	./solution.exe
	clean

clean:								# Clean up
	rm -f generator.exe solution.exe brute_force.exe


