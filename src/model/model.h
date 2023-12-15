#ifndef VIEWER_V2_0_MODEL_H_
#define VIEWER_V2_0_MODEL_H_

#include <fstream>
#include <sstream>

#include "tranformation.h"

namespace s21 {

enum error_list {
  kFileWrongExtension = 1,
  kFailedToOpen = 2,
  kIncorrectData = 3,
};

class Model {
 public:
  void Parser();
  void SetFileName(const std::string& file_name);
  void Transform(int& strategy_type, double& value, transformation_t& axis);

  int GetError();
  std::vector<int>& GetVertexIndex();
  std::vector<double>& GetVertexCoord();
  static Model& GetInstance();

 public:
  Model() = default;
  void VertexParser_(const std::string& line);
  void EdgesParser_(const std::string& line);
  void Normalize_();

  std::string filename_;
  std::vector<double> vertex_coord_{};
  std::vector<int> vertex_index_{};
  int error_code_{};
  double k_value_{};
  Strategy TransformationModel_;
};

}  // namespace s21

#endif  // VIEWER_V2_0_MODEL_H_
