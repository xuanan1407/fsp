#ifndef UTIL_API_COMPONENT_H

#define UTIL_API_COMPONENT_H

namespace utils {

extern bool gStopping;

}

class Component {
 public:
  typedef Component* Ptr;
  virtual ~Component() = default;
  virtual const char* getName() = 0;
  virtual void start() = 0;
  virtual void stop() = 0;
};

#endif /* #ifndef UTIL_API_COMPONENT_H */