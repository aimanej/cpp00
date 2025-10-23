Srcs = Account.cpp tests.cpp 

Header = Account.hpp

Name = Account

all:$(Name)

$(Name): $(Account.cpp) $(tests.cpp) $(Account.hpp)
	g++ $(Srcs) -o $(Name)

clean:
	rm -rf $(Name)

re:clean all

