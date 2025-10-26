Srcs = book.cpp

Header = book.hpp

Flags = -Wall -Wextra -Werror

Name = book

all:$(Name)

$(Name): $(Srcs) $(Header)
	c++ $(Srcs) -o $(Name)

clean:
	rm -rf $(Name)

fclean:clean

re:clean all

.Phony:clean all re fclean