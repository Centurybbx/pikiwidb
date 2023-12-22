/*
 * Copyright (c) 2023-present, Qihoo, Inc.  All rights reserved.
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#pragma once

#include "base_cmd.h"

namespace pikiwidb {

class HSetCmd : public BaseCmd {
 public:
  HSetCmd(const std::string& name, const int16_t arity, const uint32_t flag);
  void DoThroughDB(PClient* client) override;
  void DoUpdateCache(PClient* client) override;

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class HGetCmd : public BaseCmd {
 public:
  HGetCmd(const std::string& name, const int16_t arity, const uint32_t flag);
  void ReadCache(PClient* client) override;
  void DoThroughDB(PClient* client) override;
  void DoUpdateCache(PClient* client) override;

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class HMSetCmd : public BaseCmd {
 public:
  HMSetCmd(const std::string& name, const int16_t arity, const uint32_t flag);
  void DoThroughDB(PClient* client) override;
  void DoUpdateCache(PClient* client) override;

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class HMGetCmd : public BaseCmd {
 public:
  HMGetCmd(const std::string& name, const int16_t arity, const uint32_t flag);
  void ReadCache(PClient* client) override;
  void DoThroughDB(PClient* client) override;
  void DoUpdateCache(PClient* client) override;

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class HGetAllCmd : public BaseCmd {
 public:
  HGetAllCmd(const std::string& name, const int16_t arity, const uint32_t flag);
  void ReadCache(PClient* client) override;
  void DoThroughDB(PClient* client) override;
  void DoUpdateCache(PClient* client) override;

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class HKeysCmd : public BaseCmd {
 public:
  HKeysCmd(const std::string& name, const int16_t arity, const uint32_t flag);
  void ReadCache(PClient* client) override;
  void DoThroughDB(PClient* client) override;
  void DoUpdateCache(PClient* client) override;

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class HLenCmd : public BaseCmd {
 public:
  HLenCmd(const std::string& name, const int16_t arity, const uint32_t flag);
  void ReadCache(PClient* client) override;
  void DoThroughDB(PClient* client) override;
  void DoUpdateCache(PClient* client) override;

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

class HStrLenCmd : public BaseCmd {
 public:
  HStrLenCmd(const std::string& name, const int16_t arity, const uint32_t flag);
  void ReadCache(PClient* client) override;
  void DoThroughDB(PClient* client) override;
  void DoUpdateCache(PClient* client) override;

 protected:
  bool DoInitial(PClient* client) override;

 private:
  void DoCmd(PClient* client) override;
};

}  // namespace pikiwidb
