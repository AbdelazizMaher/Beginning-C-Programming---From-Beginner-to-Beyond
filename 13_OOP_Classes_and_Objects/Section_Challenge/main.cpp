#include <iostream>
#include "Movies.h"

void AddMovie(Movies &movies,std::string name,std::string rating,int watched);
void IncrementWatched(Movies &movies,std::string name);
int main()
{
    Movies my_movies;

    AddMovie(my_movies,"Big","PG-13",2);
    AddMovie(my_movies,"Star Wars","PG",5);
    AddMovie(my_movies,"Cinderlla","PG",7);

    my_movies.DisplayInfo();

    AddMovie(my_movies,"Cinderlla","PG",7);
    AddMovie(my_movies,"Ice Age","PG",12);

    my_movies.DisplayInfo();

    IncrementWatched(my_movies,"Big");
    IncrementWatched(my_movies,"Ice Age");

    my_movies.DisplayInfo();

    IncrementWatched(my_movies,"XXXX");

    return 0;
}

void AddMovie(Movies &movies,std::string name,std::string rating,int watched)
{
    if( movies.AddMovie(name,rating,watched) )
        std::cout << name << " added" << std::endl;
    else
        std::cout << name << " Already exists" << std::endl;
}

void IncrementWatched(Movies &movies,std::string name)
{
    if( movies.IncrementWatched(name) )
        std::cout << name << " Watch incremented" << std::endl;
    else
        std::cout << name << " Not found" << std::endl;
}
