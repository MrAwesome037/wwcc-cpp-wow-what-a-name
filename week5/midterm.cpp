// Suggested program structure
#include <iostream>
#include <print>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// Struct definitions
struct Movie {
    string title;
    string director;
    int year;
    double rating;
    string genre;
    bool watched;
};
// Easy way to format movie info without copy pasting a billion times
void print_movie(Movie m){
    printf("%s, directed by %s in %d", m.title, m.director, m.year);
    printf("Rating: %f, Genre %s", m.rating, m.genre);
    if(m.watched == true){
        print("You have already watched this movie");
    }else{
        print("You have not watched this movie yet");
    }
}
double get_rating(){ // Average rating
    double average;
    for(i = 0; i <= movie_list.length(); i++){
        average += movie_list[i].rating;
    }
    return average/movie_list.length();
}
// Main function
int main() {
    Movie movie_list[];
    Movie watch_lists[][];
    string genre_list[];
    int genre_count[];
    int choice;
    do{
        Movie temp_movie;
        Movie result_list[];
        string temp_genre;
        int option;
        double rating_bar;
        int older_year;
        int newer_year;
        println("1. Add Movie");
        println("2. Create Watchlist");
        println("3. Search for Movies");
        println("4. Look at Stats for NERDS"); // Its me, I'm nerds
        println("5. Exit");
        cout << "What is your choice? (1-4): ";
        cin >> choice;
        if(choice == 4){
          break;
        }
        if(choice == 1){
            printf("Enter information: ");
            print("Title: ");
            cin >> temp_movie.title;
            print("Director: ");
            cin >> temp_movie.director;
            print("Year: ");
            cin >> temp_movie.year;
            print("Genre: ");
            cin >> temp_movie.genre;
            bool new = true;
            if(genre_list.length() == 0){
                genre_list.push_back(temp_movie.genre);
                genre_count.push_back(1);
            }else{
                for(i = 0; i <= genre_list.length(); i++){
                    if(genre_list[i] == temp_movie.genre){
                        genre_count[i] += 1;
                        new = false;
                        break;
                    }
                if(new == true){
                    genre_list.push_back(temp_movie.genre);
                    genre_count.push_back(1);
                }
            }
            print("Rating: ");
            cin >> temp_movie.rating;
            do{
                int num;
                print("Watched it? (1 for yes, 2 for no): ");
                cin >> num;
                if(num == 1){
                    temp_movie.watched = true;
                }else if(num == 2){
                    temp_movie.watched = false;
                } else{
                    print("Please enter a valid number");
                }
            }while(num != 1 or num != 2);
            movie_list.push_back(temp_movie);
        }
        else if(choice == 2){
            for(i = 0; i <= movie_list.length(); i++){
                println("Do you want to add this movie to a watchlist? (1 for yes, 2 for no)");
                print_movie(movie_list[i]);
                cin >> option;
                if(option == 1){
                    result_list.push_back(movie_list[i]);
                }else if{
                    println("Moving on then");
                }else{
                    println("Not a valid option");
                }
                watch_lists.push_back(result_list);
        }
        else if(choice == 3){
            Movie search_list[];
            string search;
            string temp;
            print("Add a filter? (1 by rating, 2 by year range, 3 for neither):");
            cin >> option;
            if(option == 1){
                print("What rating do you wish to filter to?");
                cin >> rating_bar;
            }else if(option == 2){
                print("What's the oldest year you'd watch a movie from?");
                cin >> oldest_year;
                print("What's the youngest year you'd watch a movie from?");
                cin >> newest_year;
            }else{
                print("Moving on then");
            print("Search by title, director, or genre? (1, 2, or 3?):");
            cin >> option;
            if(option == 1){
                print("Search by title: ");
                cin >> search;
                transform(search.begin(), search.end(), search.begin(), [](unsigned char c){ return tolower(c);}); // All of these are meant to convert to lowercase for easier searching
                for(i = 0; i <= movie_list.length(); i++){
                   temp = movie_list[i].title;
                     transform(temp.begin(), temp.end(), temp.begin(), [](unsigned char c){ return tolower(c);});
                    if(temp == search && (rating_bar == movie_list[i].rating || !rating_bar) && (older_year <= movie_list.year <= newer_year || (!older_year && !newer_year))){
                        search_list.push_back(movie_list[i]);
                    }
                }
                for(i = 0; i <= search_list.length(); i++){
                    print_movie(search_list[i]);
                }
            }else if(option == 2){
                print("Search by director: ");
                cin >> search;
                transform(search.begin(), search.end(), search.begin(), [](unsigned char c){ return tolower(c);});
                for(i = 0; i <= movie_list.length(); i++){
                   temp = movie_list[i].director;
                     transform(temp.begin(), temp.end(), temp.begin(), [](unsigned char c){ return tolower(c);});
                    if(temp == search && (rating_bar == movie_list[i].rating || !rating_bar) && (older_year <= movie_list.year <= newer_year || (!older_year && !newer_year))){
                        search_list.push_back(move_list[i]);
                    }
                }
                for(i = 0; i <= search_list.length(); i++){
                    print_movie(search_list[i]);
                }
            }else if(option == 3){
                print("Search by genre: ");
                cin >> search;
                transform(search.begin(), search.end(), search.begin(), [](unsigned char c){ return tolower(c);});
                for(i = 0; i <= movie_list.length(); i++){
                   temp = movie_list[i].genre;
                     transform(temp.begin(), temp.end(), temp.begin(), [](unsigned char c){ return tolower(c);});
                    if(temp == search && (rating_bar == movie_list[i].rating || !rating_bar) && (older_year <= movie_list.year <= newer_year || (!older_year && !newer_year))){
                        search_list.push_back(move_list[i]);
                    }
                }
                for(i = 0; i <= search_list.length(); i++){
                    print_movie(search_list[i]);
                }
            }else{
                println("Not a valid search option");
            }
        }else if(choice == 4){
            println("Stats (FOR NERDS)");
            printf("Average Rating: %f", get_rating());
            for(i = 0; i <= genre_list.length(); i++){
                printf("%s: %d",genre_list[i], genre_count[i]);
            }
        }else{
          println("Wait, this isn't a valid option, try again.");
        }
    } while(choice != 5);
    return 0;
}
