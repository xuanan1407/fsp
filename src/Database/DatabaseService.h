#ifndef DATABASE_SERVICE_H
#define DATABASE_SERVICE_H

#include <iostream>
#include <memory>

#include "utils/Component.h"

class DatabaseService : public Component {
 public:
  DatabaseService();
  ~DatabaseService();

  const char* getName() override;
  void start() override;
  void stop() override;

  void DatabaseCall();

 private:
  const char* COMPONENT_NAME = "Database";
};
extern std::shared_ptr<DatabaseService> gFspDatabaseService;
#endif /* #ifndef UTIL_API_COMPONENT_H */