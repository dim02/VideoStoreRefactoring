#include "gmock/gmock.h"
#include "Movie.h"
using namespace testing;

TEST(MovieGetPrice, ReturnsThePriceCode) {
        Movie movie("The Shawshank Redemption", Movie::REGULAR);
        ASSERT_THAT(movie.getPriceCode(), Eq(0));
}

TEST(MovieSetPrice, SetsThePriceCode) {
        Movie movie("OldBoy");
        movie.setPriceCode(Movie::NEW_RELEASE);
        ASSERT_THAT(movie.getPriceCode(), Eq(1));
}

TEST(MovieGetTitle, ReturnsTheMovieTitle) {
        Movie movie("Toy Story", Movie::CHILDRENS);
        ASSERT_THAT(movie.getTitle(), Eq("Toy Story"));
}
