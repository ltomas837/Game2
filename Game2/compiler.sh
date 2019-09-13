mkdir build
g++ -c Main.cpp -I/home/vanderworld/stage/Graphogame-copie/SFML-2.5.1/include
g++ -c Game.cpp -I/home/vanderworld/stage/Graphogame-copie/SFML-2.5.1/include
g++ -c Input.cpp -I/home/vanderworld/stage/Graphogame-copie/SFML-2.5.1/include
g++ -c Fence.cpp -I/home/vanderworld/stage/Graphogame-copie/SFML-2.5.1/include
g++ -c Character.cpp -I/home/vanderworld/stage/Graphogame-copie/SFML-2.5.1/include
g++ -c GameSound.cpp -I/home/vanderworld/stage/Graphogame-copie/SFML-2.5.1/include
g++ -c Background.cpp -I/home/vanderworld/stage/Graphogame-copie/SFML-2.5.1/include
#g++ Main.o Game.o Input.o Fence.o Character.o GameSound.o Background.o -o build/Main -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network -lGL
g++ -c Menu.cpp -I/home/vanderworld/stage/Graphogame-copie/SFML-2.5.1/include
g++ Main.o Game.o Input.o Fence.o Character.o GameSound.o Background.o Menu.o -o build/Main -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network -lGL
mv *.o build
./build/Main
