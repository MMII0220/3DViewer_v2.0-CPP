#include <iostream>
#include <vector>
#include "model.h"

int main() {
    s21::Model model;
    std::string line = "v 1.000000 -1.000000 -1.000000";

    model.VertexParser_(line);

    if (model.GetError() == 0) {
        std::vector<double> vertexCoord = model.GetVertexCoord();
        std::cout << "Vertex Coordinates: ";
        for (double coord : vertexCoord) {
            std::cout << coord << " ";
        }
        std::cout << std::endl;
    } else {
        std::cerr << "Error parsing vertex data. Error code: " << model.GetError() << std::endl;
    }

    return 0;
}
