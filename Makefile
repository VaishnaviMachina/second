all :hello

hello : main.o factorial.o story.o
	g++ main.o factorial.o story.o

main.o :
