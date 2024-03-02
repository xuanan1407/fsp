#ifndef CERTIFICATE_H
#define CERTIFICATE_H

#include <iostream>
#include <memory>

#include "utils/Component.h"

class CertificateService : public Component {
 public:
  CertificateService();
  ~CertificateService();

  const char* getName() override;
  void start() override;
  void stop() override;

  void certificateCall();

 private:
  const char* COMPONENT_NAME = "Certificate";
};
extern std::shared_ptr<CertificateService> gFspCertificateService;
#endif /* #ifndef UTIL_API_COMPONENT_H */