all:
	cmake --build Build --config Debug -j

init:
	cmake -B Build -D CMAKE_BUILD_TYPE=Debug

run: all
	./Build/bin/GameDevelopmentProject

clean:
	rm -rf Build
