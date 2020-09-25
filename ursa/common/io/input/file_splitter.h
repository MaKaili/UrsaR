// Copyright 2020 HDL
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <memory>
#include <string>
#include <string_view>

#include "common/constants.h"

namespace axe {
namespace common {

class FileSplitter {
 public:
  std::unique_ptr<FileSplitter> static Create(FS protocol);
  virtual void Load(const std::string& url) = 0;
  virtual std::string FetchBlock(const std::string& fn, size_t offset, bool is_next = false) = 0;
  virtual std::string_view FetchBlockView(const std::string& fn, size_t offset, bool is_next = false) = 0;
};

}  // namespace common
}  // namespace axe
