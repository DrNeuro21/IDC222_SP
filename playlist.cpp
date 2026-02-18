#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<string> playlist = {"Song 1", "Song 2", "Song 3"};

    playlist.push_front("Song 0");

    auto it = playlist.begin();
    advance(it, 2);

    playlist.insert(it, "Song 1.5");

    playlist.remove("Song 3");

    it = playlist.begin();
    advance(it, 1);
    playlist.erase(it);

    cout << "Final Playlist" << endl;
    for(auto song : playlist)
    {
        cout << song << " " << endl;
    }
    return 0;
}