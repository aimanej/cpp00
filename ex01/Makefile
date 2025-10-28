Srcs = sources/main.cpp sources/contact.cpp sources/add.cpp sources/search.cpp sources/book_printer.cpp

Header = includes/phonebook.hpp includes/contacts.hpp

Flags = -g -Wall -Wextra -Werror

Name = book

all:$(Name)

$(Name): $(Srcs) $(Header)
	c++ $(Srcs) -o $(Name)

clean:
	rm -rf $(Name)

fclean:clean

re:clean all

.Phony:clean all re fclean