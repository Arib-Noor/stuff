//Lab 5 Task 6
#include <iostream>  
using namespace std;  
#include <cstring>

/*
* Write a C++ program that allows the user to create a movie database. The program should:
    1. Ask the user how many movies they want to add to the database.
    2. Dynamically allocate memory for an array to store the movie names and an array to store the movie ratings.
    3. Prompt the user to enter the name and rating (out of 10) for each movie.
    4. Write a function that should receive the movies array, ratings array and number of movies. The function should process the ratings and print a message for each movie based on its rating:
       - <MovieName>: "Excellent" for ratings 8 and above.
       - <MovieName>: "Worth Watching" for ratings between 5 and 7.
       - <MovieName>: "Better Skip" for ratings below 5.
    5. Ensure proper memory management by deallocating the memory once it is no longer needed.

    */
void sortMovieRatings(std::string *movie, float *rating, int size) {
  int topRatings[size];
  int mediumRatings[size];
  int lowRatings[size];
  for (int i = 0; i < size; i++) {
    if (rating[0] >= 8) {
      topRatings[size]
    }
  }
}

int main() {
  int size;
  std::string *movieName;
  float *movieRating;
  cout << "How many movies would you like to add" << endl;
  cin >> size;
  movieName= new int[size];
  movieRating = new int[size];
  for (int i = 0; i < size; i++) {
    cout << "Add the name of the movie" << endl;
    cin >> movieName[i];
    cout << "Add the rating of the movie" << endl;
    cin >> movieRating[i];
  }
  sortMovieRatings(movieName,movieRating,size);
}
