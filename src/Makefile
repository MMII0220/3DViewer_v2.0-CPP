CFLAGS = -Wall -Werror -Wextra -std=c++17 -lgtest -pthread -pedantic -g

.PHONY: all install uninstall build dvi dist tests style style_correct clean clean_dist

all: clean install

build:
	@cmake -B build
	@make -C build 3DViewer

install: build
	@mkdir $(HOME)/Desktop/3d_viewer2.0/
	@mkdir $(HOME)/Desktop/3d_viewer2.0/models
	@cp -rf build/3dViewer.app $(HOME)/Desktop/3d_viewer2.0/
	@tar -xvf ./obj.zip
	@cp -rf arnold.obj $(HOME)/Desktop/3d_viewer2.0/models
	@cp -rf ball.obj $(HOME)/Desktop/3d_viewer2.0/models
	@cp -rf dragon.obj $(HOME)/Desktop/3d_viewer2.0/models
	@cp -rf cat.obj $(HOME)/Desktop/3d_viewer2.0/models
	@cp -rf simple_cube.obj $(HOME)/Desktop/3d_viewer2.0/models
	@echo "┏=========================================┓"
	@echo "┃    The installation was successful.     ┃"
	@echo "┃     The project is located in the       ┃"
	@echo "┃    build folder and on the desktop.     ┃"
	@echo "┗=========================================┛"


uninstall:
	@rm -rf build
	@rm -rf $(HOME)/Desktop/3d_viewer2.0/
	@echo "┏==================================┓"
	@echo "┃ Uninstall completed successfully ┃"
	@echo "┗==================================┛"


clean:
	rm -rf *.o *.gcda *.a *.html *.gcno *.css .clang-format build  *.info
	rm -f test
	rm -rf test.dSYM
	rm -rf *.tar.gz
	rm -rf build/*.o
	rm -rf report
	rm -rf *.obj

clean_dist:
	rm -rf $(HOME)/Desktop/SmartCalc_1.0.tgz

dvi:
	open ../README.md

dist: build
	@mkdir 3d_viewer2.0
	@mkdir 3d_viewer2.0/src
	@cp -rf 3d_viewer2.0 Makefile 3d_viewer2.0/src
	@cp ../README_RUS.md ../README.md 3d_viewer2.0/
	@tar cvzf 3d_viewer2.0.tgz 3d_viewer2.0/
	@mv 3d_viewer2.0.tgz $(HOME)/Desktop/
	@rm -rf 3d_viewer2.0

tests:
	@g++ tests/*.cc model/*.cc $(CFLAGS) -o test
	./test

style:
	@echo "┏=========================================┓"
	@echo "┃  Checking your code for Google Style    ┃"
	@echo "┗=========================================┛"
	@cp ../materials/linters/.clang-format .
	@clang-format -n controller/*.cc controller/*.h model/*.cc model/*.h
	@clang-format -n view/*.cc view/*.h tests/*.cc tests/*.h
	@clang-format -n view/QtGifImage/gifimage/* view/QtGifImage/giflib/*
	@clang-format -n main.cc
	@rm ./.clang-format

style_correct:
	@echo "┏=========================================┓"
	@echo "┃  Changing your code for Google Style    ┃"
	@echo "┗=========================================┛"
	@cp ../materials/linters/.clang-format .
	@clang-format -i controller/*.cc controller/*.h model/*.cc model/*.h
	@clang-format -i view/*.cc view/*.h tests/*.cc tests/*.h
	@clang-format -i view/QtGifImage/gifimage/* view/QtGifImage/giflib/*
	@clang-format -i main.cc
	@rm ./.clang-format

leaks: tests
	@CK_FORK=no leaks --atExit -- ./test
	@rm -rf 3d_viewer/obj/
	@rm ./test
	@echo "Everything is ok"