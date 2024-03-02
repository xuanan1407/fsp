#ifndef FSP_SERVICE_H
#define FSP_SERVICE_H
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

#include "Certificate.h"
#include "DatabaseService.h"
#include "utils/Component.h"

class Component;

class FrameWorkService {
 public:
  FrameWorkService();
  virtual ~FrameWorkService();
  std::vector<std::shared_ptr<Component>> mComponent;

  void run();
  void interrupt();
  void addComponent(std::shared_ptr<Component> component);

 private:
  void start();
  void stop();
};

#endif /* #ifndef UTIL_API_COMPONENT_H */