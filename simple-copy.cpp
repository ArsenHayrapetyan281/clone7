#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
  
    if (argc != 3) {
        std::cerr << argv[0] << std::endl;
        return 1;
	}
    std::ifstream source(argv[1], std::ios::binary);
    if (!source) {
        std::cerr << argv[1] << "'." << std::endl;
        return 1;
    }

   
    std::ofstream destination(argv[2], std::ios::binary);
    if (!destination) {
        std::cerr << argv[2] << "'." << std::endl;
        return 1;
    }

  
    destination << source.rdbuf();

  
    source.close();
    destination.close();

    std::cout << argv[1] << "' to '" << argv[2] << "'." << std::endl;

    return 0;
}
