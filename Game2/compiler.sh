mkdir build
g++ -c Main.cpp 
g++ -c Game.cpp 
g++ -c Input.cpp 
g++ -c Fence.cpp 
g++ -c Character.cpp 
g++ -c GameSound.cpp 
g++ -c Background.cpp 
g++ -c Menu.cpp 
g++ Main.o Game.o Input.o Fence.o Character.o GameSound.o Background.o Menu.o -o build/Main -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network -lGL
mv *.o build
./build/Main
