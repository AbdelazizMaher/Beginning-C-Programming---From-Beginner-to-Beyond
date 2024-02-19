#include "Movies.h"


Movies::Movies()
{
}

bool Movies::AddMovie(std::string name,std::string rating,int watched)
{
    for(const Movie &movie : MoviesVect)
    {
        if( movie.Movie_GetName() == name )
            return false;
    }

    Movie Temp {name,rating,watched};
    MoviesVect.push_back(Temp);

    return true;
}

bool Movies::IncrementWatched(std::string name)
{
    for(Movie &movie : MoviesVect)
    {
        if( movie.Movie_GetName() == name )
        {
            movie.Movie_IncrementWatched();

            return true;
        }
    }
    return false;
}

void Movies::DisplayInfo(void) const
{
    if( MoviesVect.size() == 0 )
        std::cout << "Sorry, no movies to display\n" << std::endl;
    else
    {
        std::cout << "\n========================================" << std::endl;
        for(const auto &movie : MoviesVect)
            movie.DisplayInfo();
        std::cout << "\n========================================" << std::endl;
    }
}

Movies::~Movies()
{
}
