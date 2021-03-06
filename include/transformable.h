#ifndef GLH_TRANSFORMABLE
#define GLH_TRANSFORMABLE

#include <glm/mat4x4.hpp>

namespace glh
{

class Transformable
{
private:
  float tx, ty, tz;
  float sx, sy, sz;
  float pitch, yaw, roll;

public:
  Transformable();
  void translate(float, float, float);
  void scale(float, float, float);
  void rotate(float, float, float);

  glm::mat4 get_model_matrix();
  glm::mat4 get_inverse_model_matrix();
  glm::mat4 get_rotation_matrix();
  glm::mat4 get_inverse_rotation_matrix();

};

}

#endif
