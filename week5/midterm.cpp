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

void print_movie(Movie m){
    printf("%s, directed by %s in %d", m.title, m.director, m.year);
    printf("Rating: %f, Genre %s", m.rating, m.genre);
    if(m.watched == true){
        print("You have already watched this movie");
    }else{
        print("You have not watched this movie yet");
    }
}
double get_rating(){
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
    int older_year;
    int newer_year;
    do{
        Movie temp_movie;
        Movie result_list[];
        print("1. Add Movie");
        println("2. Create Watchlist");
        println("3. Search for Movies");
        println("4. Exit");
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
                
        }
        else if(choice == 3){
            int option;
            print("Search by title, director, or genre? (1, 2, or 3?):");
            cin >> option;
            if(option == 1){
            }else if(option == 2){
            }else if(option == 3){
                print("Search by genre: ");
                cin >> search;
                printf("Songs by %s", search);
                found = false;
                search_list[5] = {};
                transform(search.begin(), search.end(), search.begin(), [](unsigned char c){ return tolower(c);});
                for(i = 0; i < 4; i++){
                   temp_artist = playlist[i].name;
                     transform(temp_genre.begin(), temp_genre.end(), temp_genre.begin(), [](unsigned char c){ return tolower(c);});
                    if(temp_genre == genre_search){
                        found = true;
                        search_list[i] = playlist[i];
                    }
                }
            }else{
                println("Not a valid search option");
            }
        }
        else{
          println("Wait, this isn't a valid option, try again.");
        }
    } while(choice != 4);
    return 0;
}
