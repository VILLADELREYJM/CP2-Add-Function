all: a.out

a.out:
	g++ -std=c++14 *.cpp -o a.out

test1: a.out
	./a.out

clean:
	rm a.out
