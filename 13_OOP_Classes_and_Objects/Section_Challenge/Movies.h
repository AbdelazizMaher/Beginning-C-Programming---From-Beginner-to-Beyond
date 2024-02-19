#ifndef _MOVIES_H_
#define _MOVIES_H_

#include<vector>
#include "Movie.h"

class Movies
{
private:
    std::vector<Movie> MoviesVect;    
public:
    bool AddMovie(std::string name,std::string rating,int watched);

    bool IncrementWatched(std::string name);

    void DisplayInfo(void)const;

    Movies();
    ~Movies();
};




#endif /* _MOVIES_H_ */
