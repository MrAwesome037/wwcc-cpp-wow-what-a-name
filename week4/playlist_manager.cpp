#include <iostream>
#include <string>
using namespace std;

struct Song {
    struct Artist{
      string name;
      string hometown;
    };
    int durationSeconds;
    string genre;
    string title;
};
int main() {
    Song playlist[5] = {s1, s2, s3, s4, s5};
    int total = 0;
    Song longest;
    string artist_search;
    string temp_artist;
    string genre_search;
    string temp_genre;
    bool found = false;
    Song search_list[5];
    for(i = 1; i <= 5; i++){
        printf("Enter information for song %f: ", i);
        print("Title: ");
        cin >> playlist[i].title;
        print("Artist Name: ");
        cin >> playlist[i].name;
        print("Artist Hometown: ");
        cin >> playlist[i].hometown;
        print("Genre: ");
        cin >> playlist[i].genre;
        print("Duration (in seconds): ");
        cin >> playlist[i].durationSeconds;
        total += playlist[i].durationSeconds;
        if(i == 1){
            longest = playlist[i];
        } else if(longest.durationSeconds < playlist[i].durationSeconds){
            longest = playlist[i];
        }
    }
    print("YOUR PLAYLIST:");
    for(i = 0; i < 4; i++){
        printf("%s", playlist[i].title);
        printf("Artist: %s (%s)", playlist[i].name, playlist[i].hometown);
        printf("Genre: %s", playlist[i].genre);
        printf("Druation: %d:%d", playlist[i].duration / 60, playlist[i].duration %60);
    }
    print("Playlist stats:");
    printf("Total runtime: %d:%d", total/60,total%60);
    printf("Longest song: %s (%d:%d)", longest.title, longest.duration / 60, longest.duration %60);
    print("Search by artist: ");
    cin >> artist_search;
    printf("Songs by %s", artist_search);
    transform(artist_search.begin(), artist_search.end(), artist_search.begin(), [](unsigned char c){ return tolower(c);});
    for(i = 0; i < 4; i++){
       temp_artist = playlist[i].name;
         transform(temp_artist.begin(), temp_artist.end(), temp_artist.begin(), [](unsigned char c){ return tolower(c);});
        if(temp_artist == artist_search){
            found = true;
            search_list[i] = playlist[i];
        }
    }
    
    if(found == false){
        print("No Results");
    }else{
        for(i = 0; i < 4; i++){
            if(search_list[i] != ""){
                printf("%s (%d:%d)", search_list[i].title, search_list[i].duration / 60, search_list[i].duration %60);
        }
    }
    print("Search by genre: ");
    cin >> genre_search;
    printf("Songs by %s", genre_search);
    found = false;
    search_list[5] = {};
    transform(genre_search.begin(), genre_search.end(), genre_search.begin(), [](unsigned char c){ return tolower(c);});
    for(i = 0; i < 4; i++){
       temp_artist = playlist[i].name;
         transform(temp_genre.begin(), temp_genre.end(), temp_genre.begin(), [](unsigned char c){ return tolower(c);});
        if(temp_genre == genre_search){
            found = true;
            search_list[i] = playlist[i];
        }
    }
    if(found == false){
        print("No Results");
    }else{
        for(i = 0; i < 4; i++){
            if(search_list[i] != ""){
                printf("%s (%d:%d)", search_list[i].title, search_list[i].duration / 60, search_list[i].duration %60);
        }
    }
    return 0;
}
