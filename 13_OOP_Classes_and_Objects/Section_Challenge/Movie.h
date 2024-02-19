#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <iostream>
#include <string>

class Movie
{
private:
    std::string name;
    std::string rating;
    int watched;
public:
    void Movie_SetName(std::string name) { this->name = name; }
    std::string Movie_GetName(void) const { return name; }

    void Movie_SetRating(std::string rating) { this->rating = rating; }
    std::string Movie_GetRating(void) const { return rating; }

    void Movie_IncrementWatched() { watched++; }
    int Movie_GetWatchedVal(void) const { return watched; }

    void DisplayInfo(void) const;

    Movie(std::string name,std::string rating,int watched);
    Movie(const Movie &source);
    ~Movie();
};



#endif /* _MOVIE_H_ */
