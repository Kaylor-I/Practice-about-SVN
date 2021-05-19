#simple rule -compile and link in one go
#note:header files are not passed to compiler -they are
#are only included in source dile!!! However, they may
#may appear in dependency list
myapp: myfunctions.cpp myfunctions.h myapp.cpp
	g++ -Wall -ggdb -o myapp myfunctions.cpp myapp.cpp

#clean up -handy to enforce recomplation
clean:
	rm *~ *# myapp
