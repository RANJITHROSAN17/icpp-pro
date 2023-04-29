// The class for the Candid Type: opt

#pragma once

#include <cstring>

#include "candid.h"

class CandidTypeOptFloat32 : public CandidTypeOptBase {
public:
  // Constructors
  CandidTypeOptFloat32();
  CandidTypeOptFloat32(const std::optional<float> v);

  CandidTypeOptFloat32(std::optional<float> *p_v);

  // Destructor
  ~CandidTypeOptFloat32();

  bool decode_M(VecBytes B, __uint128_t &offset, std::string &parse_error);

protected:
  void set_pv(std::optional<float> *v) { m_pv = v; }
  void set_v(const std::optional<float> &v) { m_v = v; }
  void set_content_type();
  void encode_M();

  std::optional<float> m_v;
  std::optional<float> *m_pv{nullptr};
};